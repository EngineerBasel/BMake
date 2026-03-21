#include "../include/buildingfunctions.hpp"
#include "../include/adds.hpp"

int main()
{
  string file = "build.json";
  ifstream input_file(file);
  json building_file;
  if (check_JSON_file(input_file, building_file))
  {
    cout << "===============================================================" << endl;
    cout << "                      [ Please Wait ... ]" << endl;
    cout << "===============================================================" << endl;
    cout << CppBuilderCommend().c_str() << endl;
    system(CppBuilderCommend().c_str());
    cout << "===============================================================" << endl;
    if (!fs::exists(BinFilesPath / state / building_file["bin"]))
    {
      cout << "                     [ Process Failed ]" << endl;
      cout << "===============================================================" << endl;
      return -1;
    }
    cout << "                     [ Process Completed ]" << endl;
    cout << "===============================================================" << endl;
  }
  else
  {
    cout << "                     [ Process Failed ]" << endl;
    cout << "===============================================================" << endl;
    return -1;
  }
}