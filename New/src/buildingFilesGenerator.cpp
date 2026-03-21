#include "../include/buildingFilesGenerator.hpp"

void default_JSON()
{
  ofstream outfile(filename, std::ios::app);
  json data;
  if (!file_existed_and_has_data(filename))
  {
    data["compiler"] = "";
    data["sources_files"] = json::array();
    data["sources_files"].push_back("main.cpp");
    data["include_folders"] = json::array();
    data["include_folders"].push_back("");
    data["libraries_folders"] = json::array();
    data["libraries_folders"].push_back("");
    data["libraries"] = json::array();
    data["libraries"].push_back("");
    data["flags"] = json::array();
    data["flags"].push_back("");
    data["bin"] = "app.exe";
    data["state"] = "Debug";
    outfile << data.dump(4);
    outfile.close();
  }
}

void gcc_JSON()
{
  woring_about_exist_JSON();
  ofstream outfile(filename, std::ios::app);
  json data;
  if (!file_existed_and_has_data(filename))
  {
    data["compiler"] = "gcc";
    data["sources_files"] = json::array();
    data["sources_files"].push_back("main.cpp");
    data["include_folders"] = json::array();
    data["include_folders"].push_back("");
    data["libraries_folders"] = json::array();
    data["libraries_folders"].push_back("");
    data["libraries"] = json::array();
    data["libraries"].push_back("");
    data["flags"] = json::array();
    data["flags"].push_back("");
    data["bin"] = "app.exe";
    data["state"] = "Debug";
    outfile << data.dump(4);
    outfile.close();
  }
}

void gpp_JSON()
{
  woring_about_exist_JSON();
  ofstream outfile(filename, std::ios::app);
  json data;
  if (!file_existed_and_has_data(filename))
  {
    data["compiler"] = "g++";
    data["sources_files"] = json::array();
    data["sources_files"].push_back("main.cpp");
    data["include_folders"] = json::array();
    data["include_folders"].push_back("");
    data["libraries_folders"] = json::array();
    data["libraries_folders"].push_back("");
    data["libraries"] = json::array();
    data["libraries"].push_back("");
    data["flags"] = json::array();
    data["flags"].push_back("");
    data["bin"] = "app.exe";
    data["state"] = "Debug";
    outfile << data.dump(4);
    outfile.close();
  }
}

void clang_JSON()
{
  woring_about_exist_JSON();
  ofstream outfile(filename, std::ios::app);
  json data;
  if (!file_existed_and_has_data(filename))
  {
    data["compiler"] = "clang";
    data["sources_files"] = json::array();
    data["sources_files"].push_back("main.cpp");
    data["include_folders"] = json::array();
    data["include_folders"].push_back("");
    data["libraries_folders"] = json::array();
    data["libraries_folders"].push_back("");
    data["libraries"] = json::array();
    data["libraries"].push_back("");
    data["bin"] = "app.exe";
    data["flags"] = json::array();
    data["flags"].push_back("");
    data["state"] = "Debug";
    outfile << data.dump(4);
    outfile.close();
  }
}

void clangpp_JSON()
{
  woring_about_exist_JSON();
  string filename = "build.json";
  ofstream outfile("build.json", std::ios::app);
  json data;
  if (!file_existed_and_has_data(filename))
  {
    data["compiler"] = "clang++";
    data["sources_files"] = json::array();
    data["sources_files"].push_back("main.cpp");
    data["include_folders"] = json::array();
    data["include_folders"].push_back("");
    data["libraries_folders"] = json::array();
    data["libraries_folders"].push_back("");
    data["libraries"] = json::array();
    data["libraries"].push_back("");
    data["flags"] = json::array();
    data["flags"].push_back("");
    data["state"] = "Debug";
    outfile << data.dump(4);
    outfile.close();
  }
}