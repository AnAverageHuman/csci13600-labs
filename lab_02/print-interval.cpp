#include <iostream>

int main() {
  std::cout << "Please enter L: ";
  int el;
  std::cin >> el;

  std::cout << "Please enter U: ";
  int you;
  std::cin >> you;

  std::cout << std::endl;
  for (int i = el; i < you; i++) {
    std::cout << i;
    std::cout << " ";
  }

  std::cout << std::endl;
  return 0;
}

