#include "Parser.h"

std::string Parser::dataIntoString(){
  std::fstream fromFile(filePath);
  if(fromFile.is_open()){
    //Reads file line by line till the end,
    while(std::getline(fromFile, line)){
      jsonString += line;
    }
    //Deletes " " from jsonString
    jsonString.erase(std::remove(jsonString.begin(), jsonString.end(), ' '), jsonString.end());

    fromFile.close();
    return jsonString;

  }else{
    //In case of issues, outputs the error
    std::cerr << "Error while openning json file: " << std::strerror(errno) << '\n';
    exit(EXIT_FAILURE);
  }
}

std::string Parser::cleanString(std::string str){
  for(int i = 0; i < str.length(); i++){
    for(auto del : Delemeters){
      if(str[i] == del){
        str.erase(str.begin() + i);
      }
    }
  }
  return str;
}

std::string Parser::findValue(std::string varName){
  std::fstream file(filePath);
  if(file.is_open()){
    while(std::getline(file, line)){
      pos=line.find(varName); // search
      if(pos!=std::string::npos) // string::npos is returned if string is not found
      {
          //if found:
          pos = line.find(":"); // search
          return cleanString(line.substr(pos + 1)); //To remove all unnecessary characters using
                                                      //removeGarbage()
      }
    }
  }else{
    //In case of issues, outputs the error
    std::cerr << "Error while openning json file: " << std::strerror(errno) << '\n';
    exit(EXIT_FAILURE);
  }
}
