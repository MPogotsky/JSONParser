#include <iostream>
#include "Parser.h"

int main(int argc, char *argv[]){

  Parser p;
  // std::cout << p.dataIntoString() << '\n';
  std::cout << p.findValue("age") << '\n';

  return 0;
}
