#include <cctype>
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

int sumArray(int *arr, int size) {
  return size < 1 ? 0 : *arr + sumArray(arr + 1, --size);
}

bool isAlphanumeric(std::string s) {
  return not s.length() or (isalnum(s[0]) and isAlphanumeric(s.substr(1)));
}
