#include <cctype>
#include <string_view>

#include "main.hpp"

constexpr std::string_view muhalphabet = "abcdefghijklmnopqrstuvwxyz";
constexpr std::string_view muhALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

std::string encryptVigenere(std::string plaintext, std::string keyword) {
  int i = 0;
  for (char& c : plaintext) {
    if (! isalpha(c)) {
      continue;
    }

    c = shiftChar(c, (isupper(keyword[i]) ? muhALPHABET : muhalphabet).find(keyword[i]));
    i = ++i % keyword.length();
  }

  return plaintext;
}

