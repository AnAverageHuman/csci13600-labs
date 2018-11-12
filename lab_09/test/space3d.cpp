#include "catch.hpp"
#include "main.hpp"

Coord3D a = {10, 20, 30};
Coord3D b = {10, 10, 10};
Coord3D c = {120, 140, 110};
Coord3D d = {14, 6, 7};

TEST_CASE("Distance to origin") {
  REQUIRE(length(&a) == Approx(37.4166));
  REQUIRE(length(&b) == Approx(17.3205));
  REQUIRE(length(&c) == Approx(214.709));
  REQUIRE(length(&d) == Approx(16.7631));
}

