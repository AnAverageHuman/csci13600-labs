#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Compare") {
  REQUIRE(compare("09/13/2016", "09/17/2016") == "09/13/2016 East\n09/14/2016 East\n09/15/2016 Equal\n09/16/2016 West\n09/17/2016 West\n");
  REQUIRE(compare("01/01/2016", "01/02/2016") == "01/01/2016 West\n01/02/2016 West\n");
}

