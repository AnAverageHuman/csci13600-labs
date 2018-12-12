#include <iostream>

#include "catch.hpp"
#include "main.hpp"

int main() {
  MyVector<int> mv;

  std::cout << "Size\tNew item";
  std::cout << std::endl;
  for (int i = 0; i < 10; i++) {
    std::cout << mv.size();
    std::cout << "\t";
    std::cout << i;
    std::cout << std::endl;
    mv.push_back(i);
  }

  std::cout << "Back: ";
  std::cout << mv.back();
  std::cout << std::endl;

  std::cout << "Front: ";
  std::cout << mv.front();
  std::cout << std::endl;

  std::cout << "Access 3: ";
  std::cout << mv.at(3);
  std::cout << std::endl;

  std::cout << "Put 7: 9";
  mv[7] = 9;
  std::cout << std::endl;

  std::cout << "Resize 20, 3";
  mv.resize(20, 3);
  std::cout << std::endl;

  std::cout << "Items: ";
  for (int i = 0; i < mv.size(); i++) {
    std::cout << mv[i];
    std::cout << " ";
  }
  std::cout << std::endl;
}
