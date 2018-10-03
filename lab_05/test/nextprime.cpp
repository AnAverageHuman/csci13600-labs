#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Next Prime") {
  REQUIRE(nextPrime(100)  == 101);
  REQUIRE(nextPrime(1000) == 1009);
  REQUIRE(nextPrime(11)   == 13);
  REQUIRE(nextPrime(122)  == 127);
  REQUIRE(nextPrime(13)   == 17);
  REQUIRE(nextPrime(17)   == 19);
  REQUIRE(nextPrime(19)   == 23);
  REQUIRE(nextPrime(2)    == 3);
  REQUIRE(nextPrime(200)  == 211);
  REQUIRE(nextPrime(21)   == 23);
  REQUIRE(nextPrime(23)   == 29);
  REQUIRE(nextPrime(29)   == 31);
  REQUIRE(nextPrime(3)    == 5);
  REQUIRE(nextPrime(31)   == 37);
  REQUIRE(nextPrime(333)  == 337);
  REQUIRE(nextPrime(37)   == 41);
  REQUIRE(nextPrime(41)   == 43);
  REQUIRE(nextPrime(43)   == 47);
  REQUIRE(nextPrime(47)   == 53);
  REQUIRE(nextPrime(5)    == 7);
  REQUIRE(nextPrime(53)   == 59);
  REQUIRE(nextPrime(580)  == 587);
  REQUIRE(nextPrime(59)   == 61);
  REQUIRE(nextPrime(61)   == 67);
  REQUIRE(nextPrime(645)  == 647);
  REQUIRE(nextPrime(666)  == 673);
  REQUIRE(nextPrime(67)   == 71);
  REQUIRE(nextPrime(7)    == 11);
  REQUIRE(nextPrime(71)   == 73);
  REQUIRE(nextPrime(73)   == 79);
  REQUIRE(nextPrime(79)   == 83);
  REQUIRE(nextPrime(83)   == 89);
  REQUIRE(nextPrime(89)   == 97);
  REQUIRE(nextPrime(97)   == 101 );
  REQUIRE(nextPrime(999)  == 1009);
}

