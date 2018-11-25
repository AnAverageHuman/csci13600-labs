#include "catch.hpp"
#include "main.hpp"
#include <iostream>

TEST_CASE("Network post") {
  Network nw;
  REQUIRE(nw.addUser("mario", "Mario"));
  REQUIRE(nw.addUser("luigi", "Luigi"));
  REQUIRE(nw.addUser("yoshi", "Yoshi"));
  REQUIRE(nw.follow("mario", "luigi"));
  REQUIRE(nw.follow("luigi", "mario"));
  REQUIRE(nw.follow("luigi", "yoshi"));
  REQUIRE(nw.follow("yoshi", "mario"));
  REQUIRE(nw.writePost("mario", "It's a-me, Mario!"));
  REQUIRE(nw.writePost("luigi", "Hey hey!"));
  REQUIRE(nw.writePost("mario", "Hi Luigi!"));
  REQUIRE(nw.writePost("yoshi", "Test 1"));
  REQUIRE(nw.writePost("yoshi", "Test 2"));
  REQUIRE(nw.writePost("luigi", "I just hope this crazy plan of yours works!"));
  REQUIRE(nw.writePost("mario", "My crazy plans always work!"));
  REQUIRE(nw.writePost("yoshi", "Test 3"));
  REQUIRE(nw.writePost("yoshi", "Test 4"));
  REQUIRE(nw.writePost("yoshi", "Test 5"));
}
