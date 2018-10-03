#include "catch.hpp"
#include "main.hpp"




TEST_CASE("Next twin prime") {
  REQUIRE(nextTwinPrime(3  ) ==  5  );
  REQUIRE(nextTwinPrime(5  ) ==  7  );
  REQUIRE(nextTwinPrime(7  ) ==  11 );
  REQUIRE(nextTwinPrime(11 ) ==  13 );
  REQUIRE(nextTwinPrime(13 ) ==  17 );
  REQUIRE(nextTwinPrime(17 ) ==  19 );
  REQUIRE(nextTwinPrime(19 ) ==  29 );
  REQUIRE(nextTwinPrime(29 ) ==  31 );
  REQUIRE(nextTwinPrime(31 ) ==  41 );
  REQUIRE(nextTwinPrime(41 ) ==  43 );
  REQUIRE(nextTwinPrime(43 ) ==  59 );
  REQUIRE(nextTwinPrime(59 ) ==  61 );
  REQUIRE(nextTwinPrime(61 ) ==  71 );
  REQUIRE(nextTwinPrime(71 ) ==  73 );
  REQUIRE(nextTwinPrime(73 ) ==  101);
  REQUIRE(nextTwinPrime(101) ==  103);
  REQUIRE(nextTwinPrime(103) ==  107);
  REQUIRE(nextTwinPrime(107) ==  109);
  REQUIRE(nextTwinPrime(109) ==  137);
  REQUIRE(nextTwinPrime(137) ==  139);
  REQUIRE(nextTwinPrime(139) ==  149);
  REQUIRE(nextTwinPrime(149) ==  151);
  REQUIRE(nextTwinPrime(151) ==  179);
  REQUIRE(nextTwinPrime(179) ==  181);
  REQUIRE(nextTwinPrime(181) ==  191);
  REQUIRE(nextTwinPrime(191) ==  193);
  REQUIRE(nextTwinPrime(193) ==  197);
  REQUIRE(nextTwinPrime(197) ==  199);
  REQUIRE(nextTwinPrime(199) ==  227);
  REQUIRE(nextTwinPrime(227) ==  229);
  REQUIRE(nextTwinPrime(229) ==  239);
  REQUIRE(nextTwinPrime(239) ==  241);
  REQUIRE(nextTwinPrime(241) ==  269);
  REQUIRE(nextTwinPrime(269) ==  271);
  REQUIRE(nextTwinPrime(271) ==  281);
  REQUIRE(nextTwinPrime(281) ==  283);
  REQUIRE(nextTwinPrime(283) ==  311);
  REQUIRE(nextTwinPrime(311) ==  313);
  REQUIRE(nextTwinPrime(313) ==  347);
  REQUIRE(nextTwinPrime(347) ==  349);
  REQUIRE(nextTwinPrime(349) ==  419);
  REQUIRE(nextTwinPrime(419) ==  421);
  REQUIRE(nextTwinPrime(421) ==  431);
  REQUIRE(nextTwinPrime(431) ==  433);
  REQUIRE(nextTwinPrime(433) ==  461);
  REQUIRE(nextTwinPrime(461) ==  463);
  REQUIRE(nextTwinPrime(463) ==  521);
  REQUIRE(nextTwinPrime(521) ==  523);
  REQUIRE(nextTwinPrime(523) ==  569);
  REQUIRE(nextTwinPrime(569) ==  571);
  REQUIRE(nextTwinPrime(571) ==  599);
  REQUIRE(nextTwinPrime(599) ==  601);
  REQUIRE(nextTwinPrime(601) ==  617);
  REQUIRE(nextTwinPrime(617) ==  619);
}

