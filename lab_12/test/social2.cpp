#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Network") {
  Network nw;
  REQUIRE(nw.addUser("mario", "Mario"));
  REQUIRE(nw.addUser("luigi", "Luigi"));
  REQUIRE_FALSE(nw.addUser("mario", "Mario2"));
  REQUIRE_FALSE(nw.addUser("mario 2", "Mario2"));
  REQUIRE_FALSE(nw.addUser("mario-2", "Mario2"));
  for (int i = 2; i < 20; i++) {
    REQUIRE(
        nw.addUser("mario" + std::to_string(i), "Mario" + std::to_string(i)));
  }
  REQUIRE_FALSE(nw.addUser("yoshi", "Yoshi"));
}
