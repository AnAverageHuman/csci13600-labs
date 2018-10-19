#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Test ASCII") {
  REQUIRE(test_ascii("Cat :3 Dog") == "C 67\na 97\nt 116\n  32\n: 58\n3 51\n  32\nD 68\no 111\ng 103\n");
}

