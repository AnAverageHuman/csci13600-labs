#include <iostream>

int main() {
  std::cout << "Enter the first number: ";
  int first;
  std::cin >> first;

  std::cout << "Enter the second number: ";
  int second;
  std::cin >> second;

  std::cout << "Enter the third number: ";
  int third;
  std::cin >> third;

  std::cout << "The smallest of the three is ";
  std::cout << (first < second ?
      (first < third ? first : third) :
      (second < third ? second : third));
  std::cout << std::endl;
  return 0;
}

