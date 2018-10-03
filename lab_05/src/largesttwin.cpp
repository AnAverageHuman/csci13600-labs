#include "main.hpp"

int largestTwinPrime(int a, int b) {
  int r = -1;
  for (int i = a; i <= b; i++) {
    if (isTwinPrime(i)) {
      r = i;
    }
  }

  return r;
}

