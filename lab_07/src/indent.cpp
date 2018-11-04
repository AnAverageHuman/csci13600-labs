#include <algorithm>
#include <istream>
#include <sstream>

#include "main.hpp"

#define MUHCHAR '\t'
#define MUHOPEN '{'
#define MUHCLOS '}'

int countChar(std::string_view line, char c) {
  return std::count(line.begin(), line.end(), c);
}

std::string reindent(std::string line) {
  std::istringstream issnek(line);
  std::stringstream ossnek;
  std::string muhstring;
  int lev = 0;
  while (std::getline(issnek >> std::ws, muhstring)) {
    lev -= countChar(muhstring, MUHCLOS);
    for (int i = 0; i < lev; i++) {
      ossnek << MUHCHAR;
    }
    ossnek << muhstring;
    lev += countChar(muhstring, MUHOPEN);
    if (issnek.peek() != EOF) {
      ossnek << std::endl;
    }
  }

  return ossnek.str();
}

