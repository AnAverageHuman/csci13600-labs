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

TEST_CASE("Farther from origin") {
  REQUIRE(fartherFromOrigin(&a, &b) == &a);
  REQUIRE(fartherFromOrigin(&a, &c) == &c);
  REQUIRE(fartherFromOrigin(&a, &d) == &a);
  REQUIRE(fartherFromOrigin(&b, &c) == &c);
  REQUIRE(fartherFromOrigin(&b, &d) == &b);
  REQUIRE(fartherFromOrigin(&c, &d) == &c);
}

Coord3D e = {0, 0, 100.0};
Coord3D vel = {1, -5, 0.2};

TEST_CASE("Movement") {
  move(&e, &vel, 2.0);
  REQUIRE(e.x == 2);
  REQUIRE(e.y == -10);
  REQUIRE(e.z == 100.4);
}
