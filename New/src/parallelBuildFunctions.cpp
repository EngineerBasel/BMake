#include "../include/parallelBuildingFunctions.hpp"
#include <stdexcept>

string libraries = "";

void checkFileExistion(string fileName, ifstream &inputFile)
{
  if (!std::filesystem::exists(fileName))
  {
    throw std::runtime_error("Error: file \"build.json\" is not exist");
  }
  inputFile.open(fileName);
  if (!inputFile.is_open())
  {
    throw std::runtime_error("Error: Unable to open file \"build.json\"");
  }
}

string includePathes(string fileName = "build.json")
{
  json compilationData = json::object();
  ifstream inputFile;
  checkFileExistion(fileName, inputFile);
  inputFile >> compilationData;
  inputFile.close();
  string returnData;
  fs::path pathes;
  for (auto includeFoldersName : compilationData["include_folders"])
  {
    pathes = currentPath / includeFoldersName.get<string>();
    returnData += "-I\"" + pathes.string() + "\" ";
  }
  return returnData;
}

string librariesPathes(string fileName)
{
  json compilationData = json::object();
  ifstream inputFile;
  checkFileExistion(fileName, inputFile);
  inputFile >> compilationData;
  inputFile.close();
  string returnData;
  fs::path pathes;
  for (auto library_folders : compilationData["libraries_folders"])
  {
    if (!(library_folders == "" || input_is_empty(library_folders)))
    {
      pathes = LibrariesFilesPath / library_folders.get<string>();
      returnData += "-L\"" + pathes.string() + "\" ";
    }
  }
  return returnData;
}

string librariesNames(string fileName)
{
  json compilationData = json::object();
  ifstream inputFile;
  checkFileExistion(fileName, inputFile);
  inputFile >> compilationData;
  inputFile.close();
  string returnData;
  fs::path pathes;
  for (auto library_folders : compilationData["libraries"])
  {
    if (!(library_folders == "" || input_is_empty(library_folders)))
    {
      pathes = LibrariesFilesPath / library_folders.get<string>();
      returnData += "-L\"" + pathes.string() + "\" ";
    }
  }
  return returnData;
}

string flagsNames(string fileName)
{
  json compilationData = json::object();
  ifstream inputFile;
  checkFileExistion(fileName, inputFile);
  inputFile >> compilationData;
  inputFile.close();
  string returnData;
  fs::path pathes;
  for (auto flag : compilationData["flags"])
  {
    if (!(flag == "" || input_is_empty(flag)))
    {
      returnData += flag.get<string>() + " ";
    }
  }
  return returnData;
}

string objectsPaths(string fileName)
{
  json compilationData = json::object();
  ifstream inputFile;
  checkFileExistion(fileName, inputFile);
  inputFile >> compilationData;
  inputFile.close();
  string objectFileName;
  string returnData;
  string objectExtension = ".o";
  fs::path pathes;
  for (auto sources : compilationData["sources_files"])
  {
    if (!(input_is_empty(sources) || sources == ""))
    {
      pathes = SourceFilesPath / sources.get<string>();
      objectFileName = pathes.filename().string() + objectExtension;
      pathes = ObjectFilesPath / objectFileName;
      returnData += "\"" + pathes.string() + "\" ";
    }
  }
  return returnData;
}

vector<string> ObjectCommend(string fileName)
{
  json compilationData = json::object();
  ifstream inputFile;
  checkFileExistion(fileName, inputFile);
  inputFile >> compilationData;
  inputFile.close();
  string sorceData;
  string objectData;
  string objectFileName;
  string objectExtension = ".o";
  vector<string> command;
  fs::path pathes;
  string compilerName = compilationData["compiler"] + " ";
  for (auto sources : compilationData["sources_files"])
  {
    if (!(input_is_empty(sources) || sources == ""))
    {
      pathes = SourceFilesPath / sources.get<string>();
      sorceData += "\"" + pathes.string() + "\" ";
      objectFileName = pathes.filename().string() + objectExtension;
      pathes = ObjectFilesPath / objectFileName;
      objectData += "\"" + pathes.string() + "\" ";
      command.push_back(compilerName + "-c " + sorceData + includePathes(fileName) + "-o " + objectData + " & ");
    }
  }
  return command;
}

string OutputCommand(string fileName)
{
  json compilationData = json::object();
  ifstream inputFile;
  checkFileExistion(fileName, inputFile);
  inputFile >> compilationData;
  inputFile.close();
  fs::path pathes = BinFilesPath / compilationData["bin"];
  string returnData = compilationData["compiler"] + " " + objectsPaths(fileName) + "-o " + pathes.string();
  return returnData;
}

void parallelBuilding(string fileName = "build.json")
{
  string buildingCommand = {};
  string outputConmmand = {};
  for (string command : ObjectCommend(fileName))
  {
    buildingCommand += command;
    outputConmmand += buildingCommand + "\n";
  }
  std::cout << outputConmmand << "\n";
  system(buildingCommand.c_str());
  std::cout << OutputCommand(fileName) << "\n";
  system(OutputCommand(fileName).c_str());
}