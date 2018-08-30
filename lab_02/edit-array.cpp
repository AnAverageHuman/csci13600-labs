#include <iostream>

#define MYSIZE 10

int main() {
  int myData[MYSIZE];

  for (int &i : myData) {
    i = 1;
  }

  int value;
  int index;

  for (;;) {
    std::cout << std::endl;
    for (int i : myData) {
      std::cout << i;
      std::cout << " ";
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Input index: ";
    std::cin >> index;
    std::cout << "Input value: ";
    std::cin >> value;

    if (index < 0 || index > MYSIZE) {
      break;
    }

    myData[index] = value;  // NOLINT
  }

  std::cout << std::endl;
  std::cout << "Index out of range. Exit.";
  std::cout << std::endl;
}

