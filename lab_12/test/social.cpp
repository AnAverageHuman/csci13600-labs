#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Class Profile") {
  Profile p1("marco", "Marco");
  REQUIRE(p1.getUsername() == "marco");
  REQUIRE(p1.getFullName() == "Marco (@marco)");

  p1.setDisplayName("Marco Rossi");
  REQUIRE(p1.getUsername() == "marco");
  REQUIRE(p1.getFullName() == "Marco Rossi (@marco)");

  Profile p2("tarma1", "Tarma Roving");
  REQUIRE(p2.getUsername() == "tarma1");
  REQUIRE(p2.getFullName() == "Tarma Roving (@tarma1)");
}
