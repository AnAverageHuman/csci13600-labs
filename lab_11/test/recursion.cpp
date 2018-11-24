#include <algorithm>
#include <array>

#include "catch.hpp"
#include "main.hpp"

#define SIZE 10

constexpr std::array<int, SIZE *SIZE> ans = {
    12, 29, 24, 27, 34,  19, 46, 51, 64,  43, 0,  17, 12, 15, 22, 7,  34,
    39, 52, 31, 0,  0,   -5, -2, 5,  -10, 17, 22, 35, 14, 0,  0,  0,  3,
    10, -5, 22, 27, 40,  19, 0,  0,  0,   0,  7,  -8, 19, 24, 37, 16, 0,
    0,  0,  0,  0,  -15, 12, 17, 30, 9,   0,  0,  0,  0,  0,  0,  27, 32,
    45, 24, 0,  0,  0,   0,  0,  0,  0,   5,  18, -3, 0,  0,  0,  0,  0,
    0,  0,  0,  13, -8,  0,  0,  0,  0,   0,  0,  0,  0,  0,  -21};
int a[SIZE] = {12, 17, -5, 3, 7, -15, 27, 5, 13, -21};

TEST_CASE("Sum") {
  REQUIRE(sumRange(-2, 100) == 5047);
  REQUIRE(sumRange(33, 304) == 45832);
  REQUIRE(sumRange(33, 34) == 67);
  REQUIRE(sumRange(33, 33) == 33);
}

TEST_CASE("Sum Array") {
  int *arr = a;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      REQUIRE(sumArray(arr + i, j - i + 1) == ans[i * SIZE + j]);
    }
  }
}

TEST_CASE("Is Alphanumeric") {
  REQUIRE(isAlphanumeric(""));
  REQUIRE(isAlphanumeric("ABCD"));
  REQUIRE(isAlphanumeric("Abcd1234xyz"));
  REQUIRE_FALSE(isAlphanumeric("KLMN 8-7-6"));
}

TEST_CASE("Nested Parentheses") {
  REQUIRE(nestedParens("((()))"));
  REQUIRE(nestedParens("()"));
  REQUIRE(nestedParens(""));
  REQUIRE_FALSE(nestedParens("((("));
  REQUIRE_FALSE(nestedParens("(()"));
  REQUIRE_FALSE(nestedParens(")("));
  REQUIRE_FALSE(nestedParens("a(b)c"));
}

TEST_CASE("Is Divisible") {
  int prices[] = {10, 15, 12, 18, 19, 17, 13, 35, 33};
  REQUIRE(divisible(prices, 9));
  int prices2[] = {1, 1, 1, 2, 1};
  REQUIRE(divisible(prices2, 5));
  int prices3[] = {2, 1, 1, 2, 1};
  REQUIRE_FALSE(divisible(prices3, 5));
  int prices4[] = {10, 10};
  REQUIRE(divisible(prices4, 2));
  int prices5[] = {1, 3, 2, 6};
  REQUIRE(divisible(prices5, 4));
  int prices6[] = {1, 5, 7};
  REQUIRE_FALSE(divisible(prices6, 3));
  int prices7[] = {1, 2, 3, 1};
  REQUIRE_FALSE(divisible(prices7, 4));
  int prices8[] = {6, 2, 2, 3};
  REQUIRE_FALSE(divisible(prices8, 4));
  int prices9[] = {2, 3, 4, 6};
  REQUIRE_FALSE(divisible(prices9, 4));
}
