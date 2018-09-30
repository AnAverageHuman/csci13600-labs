#include <iostream>
#include <sstream>

#include "main.hpp"

std::string trapezoid(int width, int height) {
  if (width - (height * 2) < 0) {
    return "Impossible shape!\n";
  }

  std::string muhstring(width, MUH_CHAR);

  muhstring += "\n";

  std::stringstream ssnek;
  unsigned int el = 0;
  unsigned int ar = muhstring.length() - 1;
  for (int i = 0; i < height; i++) {
    ssnek << muhstring;
    muhstring.replace(--ar, 1, " ");
    muhstring.replace(el++, 1, " ");
  }

  return ssnek.str();
}

