#include "../include/help.hpp"

void fullHelp()
{
  cout << R"(
  ===========================================================================================
                                          [ help ]
  ===========================================================================================
  [-h]  = [--help]           : [ used for help ]
  [-g]  = [--generate]       : [ used for generate project folders and build file ]
  [-b]  = [--build]          : [ used for build broject ]
  [-d]  = [--delete]         : [ used for delete all project folders anb build file ]
  [-mj] = [--mkjson]         : [ used for generate json building file ]
  [-rj] = [--rmjson]         : [ used for remove json building file ]
  [-r]  = [--run]            : [ used for run generated executable file ]
  [--gcc]                    : [ used for generate basic json building file for gcc combiler]
  [--g++]                    : [ used for generate basic json building file for g++ combiler]
  [--clang]                  : [ used for generate basic json building file for g++ combiler]
  [--clang++]                : [ used for generate basic json building file for g++ combiler]
  [option] + [-h] or [--help]: [ used for know about option ]
  [-h] or [--help] + [option]: [ used for know about option ]
  ===========================================================================================
                                    [ addetional tools ]
  ===========================================================================================
  [ cpb ]                    : [ used to build project instead of ]
  [ chelp ]                  : [ used to show full documentation ]
  [ chelp ] + [option]       : [ used to know about one option ]
  [ run ]                    : [ used to run program ]
  ===========================================================================================
  )";
}

void generateSourcesHelp()
{
  cout << "=================================================================================" << endl;
  cout << "  [-g]  = [--generate]  :  [ used for generate project folders and build file ]" << endl;
  cout << "=================================================================================" << endl;
}

void buildProjectHelp()
{
  cout << "====================================================" << endl;
  cout << "  [-b]  = [--build]  :  [ used for build broject ]" << endl;
  cout << "====================================================" << endl;
}

void deleteSourcesHelp()
{
  cout << "=================================================================================" << endl;
  cout << "  [-d]  = [--delete]  :  [ used for delete all project folders anb build file ]" << endl;
  cout << "=================================================================================" << endl;
}

void make_JSON_Help()
{
  cout << "===================================================================" << endl;
  cout << "  [-mj] = [--mkjson]  :  [ used for generate json building file ]" << endl;
  cout << "===================================================================" << endl;
}

void remove_JSON_Help()
{
  cout << "=================================================================" << endl;
  cout << "  [-rj] = [--rmjson]  :  [ used for remove json building file ]" << endl;
  cout << "=================================================================" << endl;
}

void gccGenerateHelp()
{
  cout << "==============================================================================" << endl;
  cout << "  [--gcc]  :  [ used for generate basic json building file for gcc combiler]" << endl;
  cout << "==============================================================================" << endl;
}

void gppGenerateHelp()
{
  cout << "==============================================================================" << endl;
  cout << "  [--g++]  :  [ used for generate basic json building file for g++ combiler]" << endl;
  cout << "==============================================================================" << endl;
}

void clangGenerateHelp()
{
  cout << "==================================================================================" << endl;
  cout << "  [--clang]  :  [ used for generate basic json building file for clang combiler]" << endl;
  cout << "==================================================================================" << endl;
}

void clangppGenerateHelp()
{
  cout << "======================================================================================" << endl;
  cout << "  [--clang++]  :  [ used for generate basic json building file for clang++ combiler]" << endl;
  cout << "======================================================================================" << endl;
}

void tool_Version_Help()
{
  cout << "===============================================================" << endl;
  cout << "  [-v]  = [--version]  :  [ used to know about tool version ]" << endl;
  cout << "===============================================================" << endl;
}

void runProjectHelp()
{
  cout << "================================================================" << endl;
  cout << "  [-r]  = [--run] : [ used for run generated executable file ]" << endl;
  cout << "================================================================" << endl;
}