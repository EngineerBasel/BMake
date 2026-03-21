#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using string = std::string;
using ofstream = std::ofstream;
using ifstream = std::ifstream;

void fullHelp();
void generateSourcesHelp();
void buildProjectHelp();
void deleteSourcesHelp();
void make_JSON_Help();
void remove_JSON_Help();
void gccGenerateHelp();
void gppGenerateHelp();
void clangGenerateHelp();
void clangppGenerateHelp();
void runProjectHelp();

void tool_Version_Help();
void Help(int argc, char *argv[]);
void cHelp(int argc, char *argv[]);