#include "../include/runner.hpp"

path exeutablePath = fs::current_path()/"bin";

string getExecutablePath()
{
  ifstream inputs;
  inputs.open("build.json");
  if(!inputs.is_open())
  {
    return "Cannot Open File (build.json)";
  }
  json state = json::object();
  inputs >> state;
  exeutablePath = exeutablePath/state["state"]/state["bin"];
  return exeutablePath.string();
}

void runner()
{
  system(getExecutablePath().c_str());
}