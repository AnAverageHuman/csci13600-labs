#include <iostream>

#include "main.hpp"

void printRange(int left, int right) {
  if (left > right) {
    return;
  }

  std::cout << left;
  std::cout << " ";
  printRange(++left, right);
}

int sumRange(int left, int right) {
  return left > right ? 0 : left + sumRange(left + 1, right);
}
