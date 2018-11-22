#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Sum") {
  REQUIRE(sumRange(-2, 100) == 5047);
  REQUIRE(sumRange(33, 304) == 45832);
  REQUIRE(sumRange(33, 34) == 67);
  REQUIRE(sumRange(33, 33) == 33);
}
