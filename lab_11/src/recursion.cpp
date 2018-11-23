#include <iostream>

void printRange(int left, int right) {
  if (left > right) {
    return;
  }

  std::cout << left;
  std::cout << " ";
  printRange(++left, right);
}
