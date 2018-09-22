#include "catch.hpp"
#include "main.hpp"

TEST_CASE("East storage") {
  REQUIRE(east_storage("01/05/2016") == 72.06);
  REQUIRE(east_storage("09/19/2016") == 61.42);
  REQUIRE(east_storage("05/01/2016") == 79.79);
}

