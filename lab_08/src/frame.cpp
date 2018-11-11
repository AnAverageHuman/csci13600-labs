#include "main.hpp"

void frame(std::vector<std::vector<int> >& muhimage) {
  size_t w = muhimage.size() / 4;
  size_t h = muhimage[0].size() / 4;

  for (size_t i = w; i < 3 * w; i++) {
      muhimage[i][h] = 255;
  }

  for (size_t i = w; i < 3 * w; i++) {
      muhimage[i][h * 3] = 255;
  }

  for (size_t j = h; j < 3 * h; j++) {
      muhimage[w][j] = 255;
  }

  for (size_t j = h; j < 3 * h; j++) {
      muhimage[w * 3][j] = 255;
  }
}

