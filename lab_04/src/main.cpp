#include <iostream>

#include "main.hpp"

#define GRN(x) "\x1B[32m" x "\x1B[0m"

int main() {
  std::cout << GRN("Task A");
  std::cout << std::endl;
  std::cout << "Width: 7";
  std::cout << std::endl;
  std::cout << "Height: 4";
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "Shape:";
  std::cout << std::endl;
  std::cout << box(7, 4);
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task B");
  std::cout << std::endl;
  std::cout << "Width: 11";
  std::cout << std::endl;
  std::cout << "Height: 6";
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "Shape: ";
  std::cout << std::endl;
  std::cout << checkerboard(11, 6);

  std::cout << std::endl;
  std::cout << GRN("Task C");
  std::cout << std::endl;
  std::cout << "Size: 8";
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "Shape: ";
  std::cout << std::endl;
  std::cout << cross(8);

  std::cout << std::endl;
  std::cout << GRN("Task D");
  std::cout << std::endl;
  std::cout << "Side length: 6";
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "Shape: ";
  std::cout << std::endl;
  std::cout << lower(6);

  std::cout << std::endl;
  std::cout << GRN("Task E");
  std::cout << std::endl;
  std::cout << "Side length: 5";
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "Shape: ";
  std::cout << std::endl;
  std::cout << upper(5);

  std::cout << std::endl;
  std::cout << GRN("Task F");
  std::cout << std::endl;
  std::cout << "Width: 12";
  std::cout << std::endl;
  std::cout << "Height: 5";
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "Shape: ";
  std::cout << std::endl;
  std::cout << trapezoid(12, 5);
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "Width: 12";
  std::cout << std::endl;
  std::cout << "Height: 7";
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << trapezoid(12, 7);

  std::cout << std::endl;
  std::cout << GRN("Task G");
  std::cout << std::endl;
  std::cout << "Width: 16";
  std::cout << std::endl;
  std::cout << "Height: 11";
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "Shape: ";
  std::cout << std::endl;
  std::cout << checkerboard3(16, 11);
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "Width: 27";
  std::cout << std::endl;
  std::cout << "Height: 27";
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << checkerboard3(27, 27);

  return 0;
}

