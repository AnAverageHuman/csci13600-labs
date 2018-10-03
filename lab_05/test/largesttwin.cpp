#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Largest twin prime") {
  REQUIRE(largestTwinPrime(1, 31) == 31);
  REQUIRE(largestTwinPrime(14, 16) == -1);
  REQUIRE(largestTwinPrime(42, 58) == 43);
  REQUIRE(largestTwinPrime(431, 827) == 827);
  REQUIRE(largestTwinPrime(5, 18) == 17);
  REQUIRE(largestTwinPrime(659, 1019) == 1019);
  REQUIRE(largestTwinPrime(71, 100) == 73);
}

