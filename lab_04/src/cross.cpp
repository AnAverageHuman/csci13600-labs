#include <algorithm>
#include <iostream>
#include <sstream>

#include "main.hpp"

void muhfunc(std::stringstream *ssnek, std::string *yu, unsigned int *ar,
    unsigned int *el) {
  (*yu).replace((*el)++, 2, MUH_SPACE_CHAR);
  (*yu).replace(--(*ar), 2, MUH_CHAR_SPACE);
  *ssnek << *yu;
}

std::string cross(int size) {
  std::stringstream ssnek;  // NOLINT
  ssnek << MUH_CHAR;
  ssnek << std::string(size - 2, MUH_SPACE);
  ssnek << MUH_CHAR;
  ssnek << std::endl;
  std::string yu(ssnek.str());

  unsigned int el = 0;
  unsigned int ar = size - 1;
  unsigned int md = size / 2;

  while (el < md && ar > md && ar - el > 2) {
    muhfunc(&ssnek, &yu, &ar, &el);
  }

  std::string up(ssnek.str());

  if (size % 2 == 1) {
    muhfunc(&ssnek, &yu, &ar, &el);
  }

  ssnek << std::string(up.rbegin() + 1, up.rend());
  ssnek << std::endl;
  return ssnek.str();
}

