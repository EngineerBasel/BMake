#include "../include/buildingFilesGenerator.hpp"
#include "../include/buildingfunctions.hpp"
#include "../include/help.hpp"
#include "../include/runner.hpp"

int main(int argc, char *argv[])
{
  // strcmp -> string compare

  if ((argc == 2) && ((strcmp(argv[1], "--generate") == 0) || (strcmp(argv[1], "-g") == 0)))
  {
    sources_generator();
    mainGenerate();
    default_JSON();
  }

  else if ((argc == 2) && ((strcmp(argv[1], "--build") == 0) || (strcmp(argv[1], "-b") == 0)))
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

  else if ((argc == 2) && ((strcmp(argv[1], "-v") == 0) || (strcmp(argv[1], "--version") == 0)))
  {
    Tool_Version();
  }

  else if ((argc == 2) && ((strcmp(argv[1], "delete") == 0) || (strcmp(argv[1], "-d") == 0)))
  {
    cout << "======================================================" << endl;
    cout << " Are you shure that you want to delete full project ?" << endl;
    cout << " yes ( Y or y ) , no ( N or n) : ";
    char answer = 'n';
    cin >> answer;
    cout << "======================================================" << endl;
    if (answer == 'y' || answer == 'Y')
    {
      sources_deleter();
      remove_JSON();
    }
    else if ((answer == 'n') || (answer == 'N') || (answer = '\n'))
    {
      return 0;
    }
    else if ((answer == 'n') || (answer == 'N') || (answer = '\n'))
    {
      cout << "                [ Undefined option ]" << endl;
      cout << "======================================================" << endl;
    }
  }

  else if ((argc == 2) && (strcmp(argv[1], "--gcc") == 0))
  {
    gcc_JSON();
  }

  else if ((argc == 2) && (strcmp(argv[1], "--g++") == 0))
  {
    gpp_JSON();
  }

  else if ((argc == 2) && (strcmp(argv[1], "--clang") == 0))
  {
    clang_JSON();
  }

  else if ((argc == 2) && (strcmp(argv[1], "--clang++") == 0))
  {
    clangpp_JSON();
  }

  else if ((argc == 2) && ((strcmp(argv[1], "--rmjson") == 0) || (strcmp(argv[1], "-rj") == 0)))
  {
    cout << "==========================================================" << endl;
    cout << " Are you shure that you want to delete build.json file ?" << endl;
    cout << " yes ( Y or y ) , no ( N or n) : ";
    char answer = 'n';
    cin >> answer;
    cout << "==========================================================" << endl;
    if (answer == 'y' || answer == 'Y')
    {
      remove_JSON();
    }
    else if ((answer == 'n') || (answer == 'N') || (answer = '\n'))
    {
      return 0;
    }
    else if ((answer == 'n') || (answer == 'N') || (answer = '\n'))
    {
      cout << "                   [ Undefined option ]" << endl;
      cout << "==========================================================" << endl;
    }
  }

  else if (argc >= 2)
  {
    if ((strcmp(argv[1], "-h") == 0) || (strcmp(argv[1], "--help") == 0) || ((argc == 3) && ((strcmp(argv[2], "-h") == 0) || (strcmp(argv[2], "--help") == 0))))
    {
      Help(argc, argv);
    }
    else if ((strcmp(argv[1], "-h") == 0) || (strcmp(argv[1], "--help") == 0))
    {
      fullHelp();
    }

    else if (((strcmp(argv[1], "--build") == 0) || (strcmp(argv[1], "-b") == 0)) && ((strcmp(argv[1], "--run") == 0) || (strcmp(argv[1], "-r") == 0)))
    {
      cout << "======================================================" << endl;
      cout << " Are you shure that you want to delete full project ?" << endl;
      cout << " yes ( Y or y ) , no ( N or n) : ";
      char answer = 'n';
      cin >> answer;
      cout << "======================================================" << endl;
      if (answer == 'y' || answer == 'Y')
      {
        sources_deleter();
        remove_JSON();
      }
      else if ((answer == 'n') || (answer == 'N') || (answer = '\n'))
      {
        return 0;
      }
      else if ((answer == 'n') || (answer == 'N') || (answer = '\n'))
      {
        cout << "                [ Undefined option ]" << endl;
        cout << "======================================================" << endl;
      }
      runner();
    }

    else if (((strcmp(argv[1], "--run") == 0) || (strcmp(argv[1], "-r") == 0)) && ((strcmp(argv[1], "--build") == 0) || (strcmp(argv[1], "-b") == 0)))
    {
      cout << "======================================================" << endl;
      cout << " Are you shure that you want to delete full project ?" << endl;
      cout << " yes ( Y or y ) , no ( N or n) : ";
      char answer = 'n';
      cin >> answer;
      cout << "======================================================" << endl;
      if (answer == 'y' || answer == 'Y')
      {
        sources_deleter();
        remove_JSON();
      }
      else if ((answer == 'n') || (answer == 'N') || (answer = '\n'))
      {
        return 0;
      }
      else if ((answer == 'n') || (answer == 'N') || (answer = '\n'))
      {
        cout << "                [ Undefined option ]" << endl;
        cout << "======================================================" << endl;
      }
      runner();
    }

    else
    {
      cout << "==========================================================" << endl;
      cout << "                   [ Undefined Option ]" << endl;
      cout << "=========================================================" << endl;
    }
  }

  else
  {
    cout << "=========================================================" << endl;
    cout << "                    [ No Thing To Do ]" << endl;
    cout << "=========================================================" << endl;
    cout << " To know about bmake tool :" << endl;
    cout << "   use [ -h ] or [ --help ] options or use [ chelp ] tool" << endl;
    cout << "=========================================================" << endl;
  }
}