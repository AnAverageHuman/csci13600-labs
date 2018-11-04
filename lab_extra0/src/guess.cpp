#include <algorithm>
#include <cmath>
#include <cctype>
#include <iostream>

#include "main.hpp"

#define MUHSPACE ' '

std::string muhalphabet("abcdefghijklmnopqrstuvwxyz");
std::map<char, double> muhvec;

void muhprocess(const char& muhchar, std::map<char, double>& muhvec) {
  if (isalpha(muhchar)) {
    muhvec[tolower(muhchar)]++;
    muhvec[MUHSPACE]++;
  }
}

std::map<char, double> popvec(std::fstream& muhstream) {
  muhvec.clear();
  char muhchar;
  while (muhstream.get(muhchar)) {
    muhprocess(muhchar, muhvec);
  }

  for (auto& kv : muhvec) {
    if (kv.first == MUHSPACE) {
      continue;
    }

    kv.second /= muhvec[MUHSPACE];
  }

  return muhvec;
}

int guess(std::string_view muhstring, std::map<char, double> muhvec) {
  int muhminind = -1;
  double min = std::numeric_limits<int64_t>::max();
  std::string t;

  for (int o = 0; o < 26; o++) {
    t = muhstring;
    double tbutadoub = 0;
    std::map<char, double> nuvec;

    for (char muhchar : t) {
      muhprocess(shiftChar(muhchar, -1 * o), nuvec);
    }

    for (auto& kv : nuvec) {
      if (kv.first == MUHSPACE) {
        continue;
      }

      kv.second /= nuvec[MUHSPACE];
      tbutadoub += (kv.second - muhvec[kv.first]) * (kv.second - muhvec[kv.first]);
    }

    if (tbutadoub < min) {
      min = tbutadoub;
      muhminind = o;
    }
  }

  return muhminind % 26;
}

std::string guesss(std::string s, std::map<char, double> muhvec) {
  return decryptCaesar(s, guess(s, muhvec));
}

