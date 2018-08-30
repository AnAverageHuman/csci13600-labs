#include <iostream>

int main() {
  std::cout << "Please enter an integer: ";
  int value(101);
  std::cin >> value;

  while (value < 1 || value > 99) {
    std::cout << "Please re-enter: ";
    std::cin >> value;
  }

  std::cout << std::endl;
  std::cout << "Number squared is: ";
  std::cout << value * value;
  std::cout << std::endl;
  return 0;
}

