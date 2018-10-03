#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Divisible") {
  REQUIRE(isDivisibleBy(100, 25));
  REQUIRE_FALSE(isDivisibleBy(35, 17));
}

