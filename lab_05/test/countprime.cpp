#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Count primes") {
  REQUIRE(countPrimes(6311, 6673) == 40);
  REQUIRE(countPrimes(5851, 5857) == 2);
  REQUIRE(countPrimes(7704, 7716) == 0);
  REQUIRE(countPrimes(7703, 7716) == 1);
  REQUIRE(countPrimes(7704, 7717) == 1);
  REQUIRE(countPrimes(   2, 7919) == 1000);
}

