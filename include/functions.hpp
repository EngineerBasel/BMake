#include <iostream>
#include <filesystem>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include "../include/json.hpp"

namespace fs = std::filesystem;

using json = nlohmann::json;
using std::cin;
using std::cout;
using std::endl;
using ifstream = std::ifstream;
using ofstream = std::ofstream;
using string = std::string;

extern string filename;

void Tool_Version();
void mainGenerate();
bool file_existed_and_has_data(string filename);
bool file_existed(string filename);
void sources_generator();
void sources_deleter();
bool readFile(ifstream &input_file, json &building_file);
bool check_JSON_file(ifstream &input_file,json &building_file);
void remove_JSON();
void woring_about_exist_JSON();