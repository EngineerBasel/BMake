#include "../include/buildingfunctions.hpp"

extern string libraries;

void checkFileExistion(string fileName, ifstream &inputFile);
string includePathes(string fileName);
string librariesPathes(string fileName);
string librariesNames(string fileName);
string flagsNames(string fileName);
string objectsPaths(string fileName);
vector<string> ObjectCommend(string fileName);
string OutputCommand(string fileName);
void parallelBuilding(string fileName = "build.json");