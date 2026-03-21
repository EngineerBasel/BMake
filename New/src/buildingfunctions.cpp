#include "../include/buildingfunctions.hpp"

fs::path currentPath = fs::current_path();
fs::path BuildFilePath = currentPath / "build.json";
fs::path SourceFilesPath = currentPath / "src";
fs::path LibrariesFilesPath = currentPath;
fs::path BinFilesPath = currentPath / "bin";
fs::path ObjectFilesPath = currentPath / "obj";

string compilerName = "g++";
string flags = "";
string include = "";
string sources = SourceFilesPath.string();
string state = "Debug";

bool input_is_empty(string Input)
{
  bool result = false;
  for (char part : Input)
  {
    if (part == ' ')
    {
      result = true;
    }
    else
    {
      result = false;
    }
  }
  return result;
}