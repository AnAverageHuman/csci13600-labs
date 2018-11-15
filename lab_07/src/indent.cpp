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

std::string cleanLine(std::string line) {
  // clean out strings
  int index = 0, start, end;
  while (index < line.size() && countChar(line.substr(index), '"') >= 2) {
    start = line.find('"', index);
    end = line.find('"', start + 1);
    line.erase(start, end - start + 1);
    index = start;
  }

  // clean out end of line comments
  int endLineComment = line.find("//");
  if (endLineComment != std::string::npos) {
    line = line.substr(0, line.size() - endLineComment);
  }

  // clean out inline comments
  index = 0;
  while (index < line.size() && line.find("/*") != std::string::npos) {
    start = line.find("/*");
    end = line.find("*/", start);
    if (end != std::string::npos) {
      line.erase(start, end - start + 1);
    }
    index = start;
  }
  return line;
}

std::string reindent(std::string line) {
  std::istringstream issnek(line);
  std::stringstream ossnek;
  std::string muhstring;
  int lev = 0;
  while (std::getline(issnek >> std::ws, muhstring)) {
    // remove all irrelevant '{' and '}' from the line
    std::string cleanedLine = cleanLine(muhstring);
    lev -= countChar(cleanedLine, MUHCLOS);
    for (int i = 0; i < lev; i++) {
      ossnek << MUHCHAR;
    }
    ossnek << muhstring;
    lev += countChar(cleanedLine, MUHOPEN);
    if (issnek.peek() != EOF) {
      ossnek << std::endl;
    }
  }

  return ossnek.str();
}

