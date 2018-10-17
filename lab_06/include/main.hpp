#ifndef MAIN_HPP
#define MAIN_HPP

#include <string>

std::string test_ascii(std::string muhstring);
char shiftChar(char c, int rshift);
std::string encryptCaesar(std::string plaintext, int rshift);
std::string encryptVigenere(std::string plaintext, std::string keyword);

#endif // MAIN_HPP

