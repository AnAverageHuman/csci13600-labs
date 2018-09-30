#include <sstream>

#include "main.hpp"

std::string lower(int length) {
  std::stringstream ssnek;  // NOLINT
  std::string muhstring(length, MUH_SPACE);

  muhstring += "\n";

  for (int i = 0; i < length; i++) {
    muhstring.replace(i, 1, MUH_SHAR);
    ssnek << muhstring;
  }

  return ssnek.str();
}

