#include "../include/help.hpp"
#include <cstring>

void Help(int argc, char *argv[])
{
  if (argc == 3)
  {
    if ((strcmp(argv[1], "-h") == 0) || (strcmp(argv[1], "--help") == 0))
    {
      if ((strcmp(argv[2], "-g") == 0) || (strcmp(argv[2], "--generate") == 0))
      {
        generateSourcesHelp();
      }
      else if ((strcmp(argv[2], "-b") == 0) || (strcmp(argv[2], "--build") == 0))
      {
        buildProjectHelp();
      }
      else if ((strcmp(argv[2], "-d") == 0) || (strcmp(argv[2], "--delete") == 0))
      {
        deleteSourcesHelp();
      }
      else if ((strcmp(argv[2], "-mj") == 0) || (strcmp(argv[2], "--mkjson") == 0))
      {
        make_JSON_Help();
      }
      else if ((strcmp(argv[2], "-rj") == 0) || (strcmp(argv[2], "--rmjson") == 0))
      {
        remove_JSON_Help();
      }
      else if ((strcmp(argv[2], "-v") == 0) || (strcmp(argv[2], "--version") == 0))
      {
        tool_Version_Help();
      }
      else if ((strcmp(argv[2], "--gcc") == 0))
      {
        gccGenerateHelp();
      }
      else if ((strcmp(argv[2], "--g++") == 0))
      {
        gppGenerateHelp();
      }
      else if ((strcmp(argv[2], "--clang") == 0))
      {
        clangGenerateHelp();
      }
      else if ((strcmp(argv[2], "--clang++") == 0))
      {
        clangppGenerateHelp();
      }
    }
    else if ((strcmp(argv[1], "-g") == 0) || (strcmp(argv[1], "--generate") == 0))
    {
      if ((strcmp(argv[2], "-h") == 0) || (strcmp(argv[2], "--help") == 0))
      {
        generateSourcesHelp();
      }
    }
    else if ((strcmp(argv[1], "-v") == 0) || (strcmp(argv[1], "--version") == 0))
    {
      if ((strcmp(argv[2], "-h") == 0) || (strcmp(argv[2], "--help") == 0))
      {
        tool_Version_Help();
      }
    }
    else if ((strcmp(argv[1], "-r") == 0) || (strcmp(argv[1], "--run") == 0))
    {
      if ((strcmp(argv[2], "-h") == 0) || (strcmp(argv[2], "--help") == 0))
      {
        runProjectHelp();
      }
    }
    else if ((strcmp(argv[1], "-b") == 0) || (strcmp(argv[1], "--build") == 0))
    {
      if ((strcmp(argv[2], "-h") == 0) || (strcmp(argv[2], "--help") == 0))
      {
        buildProjectHelp();
      }
    }
    else if ((strcmp(argv[1], "-d") == 0) || (strcmp(argv[1], "--delete") == 0))
    {
      if ((strcmp(argv[2], "-h") == 0) || (strcmp(argv[2], "--help") == 0))
      {
        deleteSourcesHelp();
      }
    }
    else if ((strcmp(argv[1], "-mj") == 0) || (strcmp(argv[1], "--mkjson") == 0))
    {
      if ((strcmp(argv[2], "-h") == 0) || (strcmp(argv[2], "--help") == 0))
      {
        make_JSON_Help();
      }
    }
    else if ((strcmp(argv[1], "-rj") == 0) || (strcmp(argv[1], "--rmjson") == 0))
    {
      if ((strcmp(argv[2], "-h") == 0) || (strcmp(argv[2], "--help") == 0))
      {
        remove_JSON_Help();
      }
    }
    else if ((strcmp(argv[1], "--gcc") == 0))
    {
      if ((strcmp(argv[2], "-h") == 0) || (strcmp(argv[2], "--help") == 0))
      {
        gccGenerateHelp();
      }
    }
    else if ((strcmp(argv[1], "--g++") == 0))
    {
      if ((strcmp(argv[2], "-h") == 0) || (strcmp(argv[2], "--help") == 0))
      {
        gppGenerateHelp();
      }
    }
    else if ((strcmp(argv[1], "--clang") == 0))
    {
      if ((strcmp(argv[2], "-h") == 0) || (strcmp(argv[2], "--help") == 0))
      {
        clangGenerateHelp();
      }
    }
    else if ((strcmp(argv[1], "--clang++") == 0))
    {
      if ((strcmp(argv[2], "-h") == 0) || (strcmp(argv[2], "--help") == 0))
      {
        clangppGenerateHelp();
      }
    }
  }

  else if (argc == 2)
  {
    if ((strcmp(argv[1], "-h") == 0) || (strcmp(argv[1], "--help") == 0))
    {
      fullHelp();
    }
  }
}

void cHelp(int argc, char *argv[])
{
  if (argc == 2)
  {
    if ((strcmp(argv[1], "-g") == 0) || (strcmp(argv[1], "--generate") == 0))
    {
      generateSourcesHelp();
    }
    else if ((strcmp(argv[1], "-b") == 0) || (strcmp(argv[1], "--build") == 0))
    {
      buildProjectHelp();
    }
    else if((strcmp(argv[1], "-r") == 0) || (strcmp(argv[1], "--run") == 0))
    {
      runProjectHelp();
    }
    else if ((strcmp(argv[1], "-d") == 0) || (strcmp(argv[1], "--delete") == 0))
    {
      deleteSourcesHelp();
    }
    else if ((strcmp(argv[1], "-mj") == 0) || (strcmp(argv[1], "--mkjson") == 0))
    {
      make_JSON_Help();
    }
    else if ((strcmp(argv[1], "-rj") == 0) || (strcmp(argv[1], "--rmjson") == 0))
    {
      remove_JSON_Help();
    }
    else if ((strcmp(argv[1], "-v") == 0) || (strcmp(argv[1], "--version") == 0))
    {
      tool_Version_Help();
    }
    else if ((strcmp(argv[1], "--gcc") == 0))
    {
      gccGenerateHelp();
    }
    else if ((strcmp(argv[1], "--g++") == 0))
    {
      gppGenerateHelp();
    }
    else if ((strcmp(argv[1], "--clang") == 0))
    {
      clangGenerateHelp();
    }
    else if ((strcmp(argv[1], "--clang++") == 0))
    {
      clangppGenerateHelp();
    }
  }

  else if (argc == 1)
  {
    fullHelp();
  }
}