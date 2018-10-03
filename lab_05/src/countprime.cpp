#include "main.hpp"

int countPrimes(int a, int b) {
  int s = 0;
  for (int i = a; i <= b; i++) {
    if (isPrime(i)) {
      s++;
    }
  }

  return s;
}

