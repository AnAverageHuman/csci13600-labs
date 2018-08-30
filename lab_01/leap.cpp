#include <iostream>

[[noreturn]] void leap() {
  std::cout << "Leap year";
  std::cout << std::endl;
  exit(0);
}

[[noreturn]] void common() {
  std::cout << "Common year";
  std::cout << std::endl;
  exit(0);
}

int main() {
  std::cout << "Enter year: ";
  int year;
  std::cin >> year;
  std::cout << std::endl;

  if (year % 4 != 0) {
    common();
  }

  if (year % 100 != 0) {
    leap();
  }

  if (year % 400 != 0) {
    common();
  }

  leap();
}

