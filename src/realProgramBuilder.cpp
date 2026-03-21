#include "../include/buildingfunctions.hpp"
#include <cstring>
string CppBuilderCommend(string filename)
{
  json compilationData;
  ifstream inputFile;
  fs::path pathes;
  inputFile.open(filename);
  if (!inputFile.is_open())
  {
    cout << "There is no thing to do (no json file)" << endl;
    return "faild";
  }
  inputFile >> compilationData;
  if (!(input_is_empty(compilationData["compiler"]) || compilationData["compiler"] == ""))
  {
    compilerName = compilationData["compiler"];
  }
  string buildingCommand;
  buildingCommand = compilerName + " ";
  for (auto sources : compilationData["sources_files"])
  {
    if (!(input_is_empty(sources) || sources == ""))
    {
      pathes = SourceFilesPath / sources.get<string>();
      buildingCommand += "\"" + pathes.string() + "\" ";
    }
  }
  for (auto include : compilationData["include_folders"])
  {
    if (!(include == "" || input_is_empty(include)))
    {
      pathes = currentPath / include.get<string>();
      buildingCommand += "-I\"" + pathes.string() + "\" ";
    }
  }
  for (auto library_folders : compilationData["libraries_folders"])
  {
    if (!(library_folders == "" || input_is_empty(library_folders)))
    {
      pathes = LibrariesFilesPath / library_folders.get<string>();
      buildingCommand += "-L\"" + pathes.string() + "\" ";
    }
  }
  for (auto library : compilationData["libraries"])
  {
    if (!(library == "" || input_is_empty(library)))
    {
      buildingCommand += "-l" + library.get<string>() + " ";
    }
  }
  for (auto flag : compilationData["flags"])
  {
    if (!(flag == "" || input_is_empty(flag)))
    {
      buildingCommand += flag.get<string>() + " ";
    }
  }
  buildingCommand += " -o ";
  if (!(input_is_empty(compilationData["state"]) || compilationData["state"] == ""))
  {
    state = compilationData["state"];
  }
  pathes = BinFilesPath / state;
  if (!fs::exists(pathes))
  {
    fs::create_directories(pathes);
  }
  pathes = pathes / compilationData["bin"];
  buildingCommand += "\"" + pathes.string() + "\"";
  return buildingCommand;
}