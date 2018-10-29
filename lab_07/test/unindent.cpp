#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Unindent") {
  REQUIRE(removeLeadingSpaces("       int x = 1;  ") == "int x = 1;  ");
  REQUIRE(removeLeadingSpaces("                int main(){\n           // Hi, I'm a program!\nint x = 1; \n    for(int i = 0; i < 10; i++) {\ncout << i;\n          cout << endl;\n }\n    }") == "int main(){\n// Hi, I'm a program!\nint x = 1; \nfor(int i = 0; i < 10; i++) {\ncout << i;\ncout << endl;\n}\n}");
  REQUIRE(removeLeadingSpaces("if (c == 'A')\n    s = s + c;") == "if (c == 'A')\ns = s + c;");
  REQUIRE(removeLeadingSpaces("if (true) {\n    s = \"\{\{\";\n    t = \"ABC\";\n}") == "if (true) {\ns = \"\{\{\";\nt = \"ABC\";\n}");
}

