#include "main.hpp"

void invert(std::vector<std::vector<int> >& muhimage) {
  for (std::vector<int>& i : muhimage) {
    for (int& j : i) {
      j = 255 - j;
    }
  }
}

