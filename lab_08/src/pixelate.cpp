#include <array>

#include "main.hpp"

constexpr std::array<std::array<size_t, 2>, 4> offsets = {{{0, 0}, {0, 1}, {1, 0}, {1, 1}}};

void pixelate(std::vector<std::vector<int> >& muhimage) {
  for (size_t i = 0; i < muhimage.size() / 2; i++) {
    for (size_t j = 0; j < muhimage[0].size() / 2; j++) {
      int a = 0;
      size_t x = i * 2;
      size_t y = j * 2;
      for (std::array<size_t, 2> o : offsets) {
        a += muhimage[x + o[0]][y + o[1]];
      }

      a /= 4;
      for (std::array<size_t, 2> o : offsets) {
        muhimage[x + o[0]][y + o[1]] = a;
      }
    }
  }
}

