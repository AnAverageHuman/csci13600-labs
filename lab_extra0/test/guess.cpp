#include "catch.hpp"
#include "main.hpp"

#define MUHDICT "words"
#define TEXTSTA 0

#ifndef TEXTEND
#define TEXTEND 0
#endif//TEXTEND

const std::array<std::string, 10> a = {
  "While he waited at the train station, Joe realized that the train was late.",
  "Joe waited for the train.",
  "The train was late.",
  "Mary and Samantha took the bus.",
  "I looked for Mary and Samantha at the bus station.",
  "Mary and Samantha arrived at the bus station early and waited until noon for the bus.",
  "Joe waited for the train, but the train was late.",
  "I looked for Mary and Samantha at the bus station, but they arrived at the station before noon and left on the bus before I arrived.",
  "Mary and Samantha arried at the bus station before noon, and they left on the bus before I arrived.",
  "Mary and Samantha left on the bus before I arrived, so I did not see them at the bus station."
};

TEST_CASE("Project Gutenberg") {
  for (int i = TEXTSTA; i <= TEXTEND; i++) {
    DYNAMIC_SECTION("Text" << i) {
      std::fstream muhstream(std::to_string(i));
      std::map<char, double> dict = popvec(muhstream);
      REQUIRE(dict.size());
      for (std::string s : a) {
        for (int j = 0; j < 52; j++) {
          REQUIRE(guess(encryptCaesar(s, j), dict) == j % 26);
          REQUIRE(guesss(encryptCaesar(s, j), dict) == s);
        }
      }
    }
  }
}

