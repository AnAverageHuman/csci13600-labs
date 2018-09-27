#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Box") {
  REQUIRE(box(7, 4) == "*******\n*******\n*******\n*******\n");
  REQUIRE(box(2, 10) == "**\n**\n**\n**\n**\n**\n**\n**\n**\n**\n");
}

