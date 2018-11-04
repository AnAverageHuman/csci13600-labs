#include <fstream>
#include <sstream>

#include "catch.hpp"
#include "main.hpp"

#define THEFILE "testprog.cpp"

TEST_CASE("Count characters") {
  REQUIRE(countChar("memes", 'm') == 2);
  REQUIRE(countChar("memes", 'e') == 2);
  REQUIRE(countChar("memes", 's') == 1);
  REQUIRE_FALSE(countChar("memes", 'i'));
  REQUIRE_FALSE(countChar("memes", 'a'));
  REQUIRE_FALSE(countChar("memes", 'k'));
  REQUIRE_FALSE(countChar("memes", 'z'));
  REQUIRE(countChar("What\nis\nlove?\n", '\n') == 3);
}

TEST_CASE("Indent") {
  REQUIRE(reindent("                int main(){\n           // Hi, I'm a program!\nint x = 1; \n    for(int i = 0; i < 10; i++) {\ncout << i;\n          cout << endl;\n }\n    }\n") == "int main(){\n\t// Hi, I'm a program!\n\tint x = 1; \n\tfor(int i = 0; i < 10; i++) {\n\t\tcout << i;\n\t\tcout << endl;\n\t}\n}");
}

