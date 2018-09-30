#include <sstream>

#include "main.hpp"

std::string upper(int length) {
  std::stringstream ssnek;  // NOLINT
  std::string muhstring(length, MUH_CHAR);

  muhstring += "\n";

  for (int i = 0; i < length; i++) {
    ssnek << muhstring;
    muhstring.replace(i, 1, " ");
  }

  return ssnek.str();
}

