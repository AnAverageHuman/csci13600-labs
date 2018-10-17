#ifndef MAIN_HPP
#define MAIN_HPP

#include <string>

std::string test_ascii(std::string muhstring);
char shiftChar(char c, int rshift);
std::string encryptCaesar(std::string plaintext, int rshift);
std::string encryptVigenere(std::string plaintext, std::string keyword);
std::string decryptCaesar(std::string ciphertext, int rshift);
std::string decryptVigenere(std::string ciphertext, std::string keyword);

#endif // MAIN_HPP

