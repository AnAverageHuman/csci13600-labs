#include <algorithm>

#include "main.hpp"

constexpr std::string_view muhalphabet = "abcdefghijklmnopqrstuvwxyz";

std::string decryptCaesar(std::string ciphertext, int rshift) {
  return encryptCaesar(ciphertext, 26 - rshift);
}

std::string decryptVigenere(std::string ciphertext, std::string keyword) {
  std::transform(keyword.begin(), keyword.end(), keyword.begin(), ::tolower);

  for (char& c : keyword) {
    c = shiftChar(c, -2 * muhalphabet.find(c));
  }

  return encryptVigenere(ciphertext, keyword);
}

