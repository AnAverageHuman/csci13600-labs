#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Minutes since midnight") {
  for (int i = 0; i < 1440; i++) {
    REQUIRE(minutesSinceMidnight(Time{i / 60, i % 60}) == i);
  }
}

TEST_CASE("Minutes until") {
  REQUIRE(minutesUntil(Time{10, 30}, Time{13, 40}) == 190);
  REQUIRE(minutesUntil(Time{13, 40}, Time{10, 30}) == -190);
}
