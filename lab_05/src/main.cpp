#include <iostream>

#include "main.hpp"

#define GRN(x) "\x1B[32m" x "\x1B[0m"

int main() {
  std::cout << GRN("Task A");
  std::cout << std::endl;
  std::cout << "isDivisibleBy(100, 25)";
  std::cout << std::endl;
  std::cout << isDivisibleBy(100, 25);
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "isDivisibleBy(35, 17)";
  std::cout << std::endl;
  std::cout << isDivisibleBy(35, 17);
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task B");
  std::cout << std::endl;
  std::cout << "isPrime(200)";
  std::cout << std::endl;
  std::cout << isPrime(200);
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "isPrime(23)";
  std::cout << std::endl;
  std::cout << isPrime(23);
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task C");
  std::cout << std::endl;
  std::cout << "nextPrime(14)";
  std::cout << std::endl;
  std::cout << nextPrime(14);
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "nextPrime(17)";
  std::cout << std::endl;
  std::cout << nextPrime(17);
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task D");
  std::cout << std::endl;
  std::cout << "countPrimes(2, 7919)";
  std::cout << std::endl;
  std::cout << countPrimes(2, 7919);
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "countPrimes(6311, 6673)";
  std::cout << std::endl;
  std::cout << countPrimes(6311, 6673);
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task E");
  std::cout << std::endl;
  std::cout << "isTwinPrime(31)";
  std::cout << std::endl;
  std::cout << isTwinPrime(31);
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "isTwinPrime(33)";
  std::cout << std::endl;
  std::cout << isTwinPrime(33);
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task F");
  std::cout << std::endl;
  std::cout << "nextTwinPrime(31)";
  std::cout << std::endl;
  std::cout << isTwinPrime(31);
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "nextTwinPrime(45)";
  std::cout << std::endl;
  std::cout << isTwinPrime(45);
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task G");
  std::cout << std::endl;
  std::cout << "largestTwinPrime(31, 44)";
  std::cout << std::endl;
  std::cout << largestTwinPrime(31, 44);
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "largestTwinPrime(100, 1000)";
  std::cout << std::endl;
  std::cout << largestTwinPrime(100, 1000);
  std::cout << std::endl;

  return 0;
}

