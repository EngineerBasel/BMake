#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>
#include <cstdlib>
#include "../include/json.hpp"

namespace fs = std::filesystem;

using json = nlohmann::json;
using string = std::string;
using path = fs::path;
using ifstream = std::ifstream;
using std::cout;
using std::endl;

extern path exeutablePath;
extern json state;

string getExecutablePath();
void runner();