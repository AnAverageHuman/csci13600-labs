#include <algorithm>

#include "main.hpp"

constexpr std::string_view muhalphabet = "abcdefghijklmnopqrstuvwxyz";

std::string decryptCaesar(std::string ciphertext, int rshift) {
  return encryptCaesar(ciphertext, 26 - rshift);
}

