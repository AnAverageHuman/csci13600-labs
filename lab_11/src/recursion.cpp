#include <cctype>
#include <functional>
#include <iostream>

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
  return not s.length() or (s[0] == '(' and s.back() == ')' and
      (s.pop_back(), s.erase(s.begin()), nestedParens(s)));
}

bool divisible(int *prices, int size) {
  std::function<int(int *, int, int)> f = [&](int *p, int s, int t) -> bool {
    return not s ? not t : f(p + 1, s - 1, t + *p) or f(p + 1, s - 1, t - *p);
  };
  return f(prices, size, 0);
}
