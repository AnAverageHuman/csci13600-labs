#include <vector>

#include "catch.hpp"
#include "main.hpp"

MyVector<int> mv;
std::vector<int> vv;

TEST_CASE("size") {
  REQUIRE(mv.size() == vv.size());
  int x = GENERATE(range(1, 100));
  mv.resize(x);
  vv.resize(x);
  REQUIRE(mv.size() == vv.size());
  for (int i = 0; i < vv.size(); i++) {
    REQUIRE(mv[i] == vv[i]);
  }
}

TEST_CASE("empty") {
  REQUIRE(mv.empty() == vv.empty());
  mv.push_back(3);
  vv.push_back(3);
  for (int i = 0; i < vv.size(); i++) {
    mv.pop_back();
    vv.pop_back();
  }
  REQUIRE(mv.empty() == vv.empty());
}

TEST_CASE("access") {
  for (int k = 0; k < mv.size(); k++) {
    REQUIRE(mv.at(k) == vv.at(k));
  }

  REQUIRE(mv.front() == vv.front());
  REQUIRE(mv.back() == vv.back());
}

TEST_CASE("miscellany") {
  mv.reserve(200);
  vv.reserve(200);
  mv.shrink_to_fit();
  vv.shrink_to_fit();
}

TEST_CASE("clear") {
  mv.clear();
  vv.clear();
  REQUIRE(mv.empty() == vv.empty());
  REQUIRE(mv.size() == vv.size());
}

TEST_CASE("exceptions and nesting") {
  MyVector<MyVector<int>> mv2 = {{3, 4, 6, 2}, {1, 2, 1}, {8, 7, 6, 5}};
  std::vector<std::vector<int>> vv2 = {{3, 4, 6, 2}, {1, 2, 1}, {8, 7, 6, 5}};
  REQUIRE_NOTHROW(mv2.at(2));
  REQUIRE_THROWS(mv2.at(3));
  mv2.emplace_back(1, 2, 3, 4);
  vv2.emplace_back(std::initializer_list<int>{1, 2, 3, 4});
  REQUIRE_NOTHROW(mv2.at(3));
  REQUIRE_THROWS(mv2.at(4));
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < vv2[i].size(); j++) {
      REQUIRE(mv2[i][j] == vv2[i][j]);
    }
  }
}

TEST_CASE("assignment") {
  mv.assign(10, 3);
  vv.assign(10, 3);
  for (int i = 0; i < vv.size(); i++) {
    REQUIRE(mv[i] == vv[i]);
  }
}
