#include <sstream>

#include "main.hpp"

std::string test_ascii(std::string muhstring) {
  std::stringstream ssnek;

  for (char& c : muhstring) {
    ssnek << c;
    ssnek << " ";
    ssnek << static_cast<int>(c);
    ssnek << std::endl;
  }

  return ssnek.str();
}

