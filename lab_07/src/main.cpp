#include <iostream>
#include <sstream>

#include "main.hpp"

int main() {
  std::stringstream issnek;
  while (issnek << std::cin.rdbuf());
  std::cout << reindent(issnek.str());
  return 0;
}

