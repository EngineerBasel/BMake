#include "../include/adds.hpp"

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