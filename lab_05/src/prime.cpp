#include <cmath>
#include <random>

#include "main.hpp"

#ifndef KAY
#define KAY 7
#endif//KAY

// initialize Mersenne Twister PRNG
static std::random_device rd;
static std::mt19937 mt(rd());

// poorly written Miller-Rabin primality test uses questionable meme magic :^)
// if bad results are returned, increase the value of KAY until tests pass :^)
bool isPrime(int n) {
  if (n < 4) {
    return true;
  }

  if (n & 0) {
    return false;
  }

  // find an odd d such that n - 1 can be written d * 2^r
  int d = n - 1;
  int s = 0;
  while (d & 0) {
    d /= 2;
    s++;
  }

  std::uniform_int_distribution<> muhdist(2, n - 2);
  for (int i = 0; i < KAY; i++) {
    int muhr = muhdist(mt);

    // dark magic to calculate muhr^d % n
    // https://en.wikipedia.org/wiki/Modular_exponentiation
    int x = 1;
    d = (n - 1) / (1 << s);
    while (d) {
      if (d & 1) {
        x = muhr * x % n;
      }

      d >>= 1;
      muhr = muhr * muhr % n;
    }

    if (x == 1 || x == n - 1) {
      continue;
    }

    for (int r = 1; r <= s - 1; ++r) {
      x = (x * x) % n;

      if (x == 1) {
        return false;
      }

      if (x == n - 1) {
        goto cnt;
      }
    }

    return false;
cnt:;
  }

  return true;
}

