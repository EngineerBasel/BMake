#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <filesystem>
#include "../include/json.hpp"

namespace fs = std::filesystem;

using json = nlohmann::json;
using std::cout, std::cin;
using std::endl;
using std::vector;
using ifstream = std::ifstream;
using ofstream = std::ofstream;
using string = std::string;

extern fs::path currentPath;
extern fs::path BuildFilePath;
extern fs::path OutFilePath;
extern fs::path SourceFilesPath;
extern fs::path LibrariesFilesPath;
extern fs::path BinFilesPath;

extern string compilerName;
extern string flags;
extern string include;
extern string output;
extern string sources;
extern string state;

bool input_is_empty(string Input);
string CppBuilderCommend(string filename = "build.json");