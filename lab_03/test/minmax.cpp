#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Min/Max") {
  REQUIRE(min_storage() == 49.34);
  REQUIRE(max_storage() == 81);
}


