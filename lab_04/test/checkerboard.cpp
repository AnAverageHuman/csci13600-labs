#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Checkerboard") {
  REQUIRE(checkerboard(11, 6) == "* * * * * *\n * * * * * \n* * * * * *\n * * * * * \n* * * * * *\n * * * * * \n");
  REQUIRE(checkerboard(8, 8) == "* * * * \n * * * *\n* * * * \n * * * *\n* * * * \n * * * *\n* * * * \n * * * *\n");
}

