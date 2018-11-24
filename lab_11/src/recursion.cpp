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

bool nestedParens(std::string s) {
  return not s.length() or
         (s[0] == '(' and s.back() == ')' and
          (static_cast<void>(s.pop_back()),
           static_cast<void>(s.erase(s.begin())), nestedParens(s)));
}

bool f(int *p, int s, int t) {
  return s ? f(p + 1, s - 1, t + *p) or f(p + 1, s - 1, t - *p) : not t;
}

bool divisible(int *prices, int size) { return f(prices, size, 0); }
