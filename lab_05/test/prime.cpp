#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Prime") {
  REQUIRE(isPrime(2));
  REQUIRE(isPrime(3));
  REQUIRE(isPrime(5));
  REQUIRE(isPrime(7));
  REQUIRE(isPrime(11));
  REQUIRE(isPrime(13));
  REQUIRE(isPrime(17));
  REQUIRE(isPrime(19));
  REQUIRE(isPrime(23));
  REQUIRE(isPrime(29));
  REQUIRE(isPrime(31));
  REQUIRE(isPrime(37));
  REQUIRE(isPrime(41));
  REQUIRE(isPrime(43));
  REQUIRE(isPrime(47));
  REQUIRE(isPrime(53));
  REQUIRE(isPrime(59));
  REQUIRE(isPrime(61));
  REQUIRE(isPrime(67));
  REQUIRE(isPrime(71));
  REQUIRE(isPrime(73));
  REQUIRE(isPrime(79));
  REQUIRE(isPrime(83));
  REQUIRE(isPrime(89));
  REQUIRE(isPrime(97));
  REQUIRE_FALSE(isPrime(100));
  REQUIRE_FALSE(isPrime(1000));
  REQUIRE_FALSE(isPrime(122));
  REQUIRE_FALSE(isPrime(200));
  REQUIRE_FALSE(isPrime(21));
  REQUIRE_FALSE(isPrime(333));
  REQUIRE_FALSE(isPrime(580));
  REQUIRE_FALSE(isPrime(645));
  REQUIRE_FALSE(isPrime(666));
  REQUIRE_FALSE(isPrime(999));
}

