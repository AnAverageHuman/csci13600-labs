#include "main.hpp"

void invert_half(std::vector<std::vector<int> >& muhimage) {
  for (std::vector<int>& i : muhimage) {
    for (size_t j = i.size() / 2; j < i.size(); j++) {
      i[j] = 255 - i[j];
    }
  }
}

