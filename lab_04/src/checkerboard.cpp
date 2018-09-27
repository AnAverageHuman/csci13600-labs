#include <iostream>
#include <sstream>

#include "main.hpp"

std::string checkerboard(int width, int height) {
  std::stringstream ssnek;
  for (int i = 0; i < width; i++) {
    ssnek << (i % 2 == 0 ? MUH_CHAR : MUH_SPACE);
  }
  std::string yu(ssnek.str());

  ssnek.str("");
  for (int i = 0; i < width; i++) {
    ssnek << (i % 2 == 1 ? MUH_CHAR : MUH_SPACE);
  }
  std::string el(ssnek.str());

  ssnek.str("");
  for (int i = 0; i < height; i++) {
    ssnek << (i % 2 == 0 ? yu : el);
    ssnek << std::endl;
  }

  return ssnek.str();
}

