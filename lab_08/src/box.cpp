#include "main.hpp"

void box(std::vector<std::vector<int> >& muhimage) {
  size_t w = muhimage.size() / 4;
  size_t h = muhimage[0].size() / 4;
  for (size_t i = w; i < 3 * w; i++) {
    for (size_t j = h; j < 3 * h; j++) {
      muhimage[i][j] = 255;
    }
  }
}

