#include <istream>
#include <sstream>

#include "main.hpp"

std::string removeLeadingSpaces(std::string line) {
  std::istringstream issnek(line);
  std::stringstream ossnek;
  std::string muhstring;
  while (std::getline(issnek >> std::ws, muhstring)) {
    ossnek << muhstring;
    if (issnek.peek() != EOF) {
      ossnek << std::endl;
    }
  }

  return ossnek.str();
}

