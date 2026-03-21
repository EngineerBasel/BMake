#include <iostream>
#include <filesystem>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include "../include/json.hpp"

namespace fs = std::filesystem;

using json = nlohmann::json;
using std::cout;
using std::endl;
using ifstream = std::ifstream;
using string = std::string;

bool readFile(ifstream &input_file, json &building_file);
bool check_JSON_file(ifstream &input_file,json &building_file);