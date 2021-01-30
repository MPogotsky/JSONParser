#include "Parser.h"

std::string Parser::dataIntoString(){
  std::fstream fromFile(filePath);
  if(fromFile.is_open()){
    while(std::getline(fromFile, line)){
      jsonString += line;
    }
    fromFile.close();
    return jsonString;
  }else{
    return "Error";
  }

}

// std::string Parser::getValue() {
//   return Parser::dataIntoString();
// }
