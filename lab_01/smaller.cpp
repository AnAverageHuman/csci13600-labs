#include <iostream>

int main() {
  std::cout << "Enter the first number: ";
  int first;
  std::cin >> first;

  std::cout << "Enter the second number: ";
  int second;
  std::cin >> second;

  std::cout << "The smaller of the two is ";
  std::cout << (first < second ? first : second);
  std::cout << std::endl;
  return 0;
}

