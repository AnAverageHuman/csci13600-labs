#include <iostream>

#include "main.hpp"

#define GRN(x) "\x1B[32m" x "\x1B[0m"

int main() {
  std::cout << GRN("Task A");
  std::cout << std::endl;
  std::cout << "Date: 05/20/2016";
  std::cout << std::endl;
  std::cout << "East basin storage: ";
  std::cout << east_storage("05/20/2016");
  std::cout << " billion gallons";
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task B");
  std::cout << std::endl;
  std::cout << "minimum storage in East basin: ";
  std::cout << min_storage();
  std::cout << " billion gallons";
  std::cout << std::endl;
  std::cout << "MAXimum storage in East basin: ";
  std::cout << max_storage();
  std::cout << " billion gallons";
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task C");
  std::cout << std::endl;
  std::cout << "Starting date: 09/13/2016";
  std::cout << std::endl;
  std::cout << "Ending date: 09/17/2016";
  std::cout << std::endl;
  std::cout << compare("09/13/2016", "09/17/2016");

  std::cout << std::endl;
  std::cout << GRN("Task D");
  std::cout << std::endl;
  std::cout << "Earlier date: 05/29/2016";
  std::cout << std::endl;
  std::cout << "Later date: 06/02/2016";
  std::cout << std::endl;
  std::cout << reverse("05/29/2016", "06/02/2016");

  return 0;
}

