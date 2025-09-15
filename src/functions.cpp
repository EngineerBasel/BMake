#include "../include/functions.hpp"

string filename = "build.json";

void Tool_Version()
{
  cout << "===============================================================" << endl;
  cout << "                     [ bamake version 0.1 ]" << endl;
  cout << "===============================================================" << endl;
}

void mainGenerate()
{
  fs::path currentPath = fs::current_path() / "src";
  if (!fs::exists(currentPath / "main.cpp"))
  {
    ofstream outfile((currentPath / "main.cpp").string());
    outfile << R"(#include <iostream>
using namespace std;
int main()
{
    cout << "Hello bmake" << endl;
    return 0;
})";
    outfile.close();
  }
}

bool file_existed_and_has_data(string filename)
{
  return (fs::exists(filename) && fs::file_size(filename) > 0);
}

bool file_existed(string filename)
{
  return (fs::exists(filename));
}

void sources_generator()
{
  fs::path currentPath = fs::current_path();
  fs::create_directories(currentPath / "bin");
  fs::create_directories(currentPath / "src");
  fs::create_directories(currentPath / "include");
  fs::create_directories(currentPath / "obj");
  fs::create_directories(currentPath / "lib");
  cout << "========================================================" << endl;
  cout << "Process completed : All directories created successfully." << endl;
  cout << "========================================================" << endl;
}

void sources_deleter()
{
  fs::path currentPath = fs::current_path();
  fs::remove_all(currentPath / "bin");
  fs::remove_all(currentPath / "src");
  fs::remove_all(currentPath / "include");
  fs::remove_all(currentPath / "obj");
  fs::remove_all(currentPath / "lib");
  cout << "===============================================================" << endl;
  cout << "   Process completed : All directories deleated successfully." << endl;
  cout << "===============================================================" << endl;
}

bool readFile(ifstream &input_file, json &building_file)
{
  try
  {
    input_file >> building_file;
  }
  catch (json::parse_error &e)
  {
    cout << "============================================================" << endl;
    std::cerr << "Error!! : " << e.what() << '\n';
    cout << "============================================================" << endl;
    return false;
  }
  return true;
}

bool check_JSON_file(ifstream &input_file, json &building_file)
{
  if (!input_file.is_open())
  {
    cout << "============================================================" << endl;
    cout << "                   File is not existed" << endl;
    cout << "============================================================" << endl;
    return false;
  }
  else
  {
    if (readFile(input_file, building_file))
    {
      return true;
    }
    else
    {
      return false;
    }
  }
}

void remove_JSON()
{
  fs::path currentPath = fs::current_path();
  fs::path filePath = currentPath / filename;
  fs::remove(filePath.string());
  cout << "============================================================" << endl;
  cout << "         JSON Building File deleated successfully" << endl;
  cout << "============================================================" << endl;
}

void woring_about_exist_JSON()
{
  if (file_existed_and_has_data(filename))
  {
    cout << "============================================================" << endl;
    cout << "       There is a json file existed and has a data" << endl;
    cout << "============================================================" << endl;
  }
  else if (file_existed(filename))
  {
    cout << "============================================================" << endl;
    cout << "                  There is a file existed" << endl;
    cout << "============================================================" << endl;
  }
  return;
}