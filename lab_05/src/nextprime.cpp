#include "main.hpp"

int nextPrime(int n) {
  for (;;) {
    if (isPrime(++n)) {
      return n;
    }
  }
}

