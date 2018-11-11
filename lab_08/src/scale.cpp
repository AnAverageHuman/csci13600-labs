#include "main.hpp"

void scale(std::vector<std::vector<int> >& muhimage) {
  std::vector<std::vector<int> > old = muhimage;

  for (size_t i = 0; i < old.size() * 2; i++) {
    if (i >= muhimage.size()) {
      muhimage.emplace_back(std::vector<int>());
    }

    for (size_t j = 0; j < old[0].size() * 2; j++) {
      if (j >= muhimage[i].size()) {
        muhimage[i].push_back(old[i / 2][j / 2]);
      } else {
        muhimage[i][j] = old[i / 2][j / 2];
      }
    }
  }
}

