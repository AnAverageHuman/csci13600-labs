#include <iostream>

#define LIMIT 60

#ifdef PROPER
#include <cstdint>
uint64_t fib[LIMIT];
#else
int fib[LIMIT];
#endif /* PROPER */


int main() {
  fib[0] = 0;
  fib[1] = 1;

  for (int i = 2; i < LIMIT; i++) {
    fib[i] = fib[i - 2] + fib[i - 1]; // NOLINT
  }

#ifdef PROPER
  for (uint64_t &i : fib) {
#else
  for (int &i : fib) {
#endif
    std::cout << i;
    std::cout << std::endl;
  }

  return 0;
}

