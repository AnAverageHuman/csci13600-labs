#include "main.hpp"

bool isTwinPrime(int n) {
  return isPrime(n) && (isPrime(n + 2) || isPrime(n - 2));
}

