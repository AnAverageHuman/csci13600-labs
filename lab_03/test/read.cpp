#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Data properly read") {
  REQUIRE(read_data());
  REQUIRE(muhdata["01/05/2016"].aes == 72.06);
  REQUIRE(muhdata["12/25/2016"].awe == 571.98);
}

