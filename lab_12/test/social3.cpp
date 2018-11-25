#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Network following") {
  Network nw;
  REQUIRE(nw.addUser("mario", "Mario"));
  REQUIRE(nw.addUser("luigi", "Luigi"));
  REQUIRE(nw.addUser("yoshi", "Yoshi"));
  REQUIRE(nw.follow("mario", "luigi"));
  REQUIRE(nw.follow("mario", "yoshi"));
  REQUIRE(nw.follow("luigi", "mario"));
  REQUIRE(nw.follow("luigi", "yoshi"));
  REQUIRE(nw.follow("yoshi", "mario"));
  REQUIRE(nw.follow("yoshi", "luigi"));
  REQUIRE(nw.addUser("wario", "Wario"));
  for (int i = 2; i < 6; i++) {
    REQUIRE(
        nw.addUser("mario" + std::to_string(i), "Mario " + std::to_string(i)));
    REQUIRE(nw.follow("mario" + std::to_string(i), "mario"));
  }
  REQUIRE(nw.follow("mario2", "luigi"));
}
