#ifndef JSONPARSER_PARSER
#define JSONPARSER_PARSER

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class Parser{
private:

  std::string filePath;
  std::string line;
  std::string jsonString;

public:
  Parser()
  :filePath("/home/pahotski/LinuxProjects/JSONParser/spike/test.json"){
  }

  std::string dataIntoString();
  std::string getValue();

  ~Parser(){
  }

};

#endif
