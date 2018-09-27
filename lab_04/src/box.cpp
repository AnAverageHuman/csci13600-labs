#include <sstream>

#include "main.hpp"

std::string box(int width, int height) {
  std::stringstream ssnek;  // NOLINT
  ssnek << std::string(width, MUH_CHAR);
  ssnek << std::endl;

  std::string muhline(ssnek.str());
  for (int i = 1; i < height; i++) {
    ssnek << muhline;
  }

  return ssnek.str();
}

