#include "main.hpp"

int nextTwinPrime(int n) {
  for (;;) {
    if (isTwinPrime(++n)) {
      return n;
    }
  }
}

