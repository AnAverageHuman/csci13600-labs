#include <cctype>
#include <string_view>

#include "main.hpp"

constexpr std::string_view muhalphabet = "abcdefghijklmnopqrstuvwxyz";
constexpr std::string_view muhALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

char shiftChar(char c, int rshift) {
  if (! isalpha(c)) {
    return c;
  }

  // breaks when rshift < -26
  if (isupper(c)) {
    return muhALPHABET[(muhALPHABET.find(c) + rshift + 26) % 26];
  }

  return muhalphabet[(muhalphabet.find(c) + rshift + 26) % 26];
}

std::string encryptCaesar(std::string plaintext, int rshift) {
  for (char& c : plaintext) {
    c = shiftChar(c, rshift);
  }

  return plaintext;
}

