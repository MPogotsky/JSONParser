#include "Parser.h"

std::string Parser::dataIntoString(){
  std::fstream fromFile(filePath);
  if(fromFile.is_open()){
    //Reads file line by line till the end,
    //writes 'line' without spaces into jsonString
    while(std::getline(fromFile, line, ' ')){
      jsonString += line;
    }
    //Deletes \n from jsonString
    jsonString.erase(std::remove(jsonString.begin(), jsonString.end(), '\n'), jsonString.end());

    fromFile.close();
    return jsonString;

  }else{
    //In case of issues, outputs the error
    std::cerr << "Error while openning json file: " << std::strerror(errno) << '\n';
    exit(EXIT_FAILURE);
  }
}
