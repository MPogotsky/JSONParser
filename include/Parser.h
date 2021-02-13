#ifndef JSONPARSER_PARSER
#define JSONPARSER_PARSER

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

#include <cstring> //Used to output errors
#include <cerrno>


class Parser{
private:

  std::string filePath;
  std::string line;
  std::string value;

  std::string jsonString;
  int pos;

  const std::vector<char> Delemeters = {'{','}','[',']','"',',',':'};

  std::string cleanString(std::string str);

public:
  Parser()
  :filePath("/home/pahotski/LinuxProjects/JSONParser/spike/test.json")
  {

  }

  std::string dataIntoString();

  std::string findValue(std::string varName);

  ~Parser(){
  }

};

#endif
