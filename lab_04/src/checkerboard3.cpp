#include <sstream>

#include "main.hpp"

std::string checkerboard3(int width, int height) {
  std::stringstream ssnek;  // NOLINT
  std::string el;

  if (height > 3) {
    for (unsigned int i = 0; i < width; i++) {
      ssnek << (i / 3 & 1 ? MUH_CHAR : MUH_SPACE);
    }
    ssnek << std::endl;
    el = ssnek.str();
    ssnek.str("");
    ssnek.clear();
  }

  for (unsigned int i = 0; i < width; i++) {
    ssnek << (i / 3 & 1 ? MUH_SPACE : MUH_CHAR);
  }
  ssnek << std::endl;
  std::string yu(ssnek.str());

  for (unsigned int i = 1; i < height; i++) {
    ssnek << (i / 3 & 1 ? el : yu);
  }

  return ssnek.str();
}

