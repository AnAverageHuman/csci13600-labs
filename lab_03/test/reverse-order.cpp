#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Reverse order") {
  REQUIRE(reverse("05/29/2016", "06/02/2016") == "06/02/2016  587.66 ft\n06/01/2016  587.81 ft\n05/31/2016  587.93 ft\n05/30/2016  588.02 ft\n05/29/2016  588.17 ft\n");
  REQUIRE(reverse("01/01/2016", "01/02/2016") == "01/02/2016  582.44 ft\n01/01/2016  582.48 ft\n");
}
