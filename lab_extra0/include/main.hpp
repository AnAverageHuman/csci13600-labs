#ifndef MAIN_HPP
#define MAIN_HPP

#include <fstream>
#include <map>
#include <string>
#include <string_view>

char shiftChar(char c, int rshift);
std::string encryptCaesar(std::string plaintext, int rshift);
std::string encryptVigenere(std::string plaintext, std::string keyword);
std::string decryptCaesar(std::string ciphertext, int rshift);

extern std::map<char, double> muhvec;

std::map<char, double> popvec(std::fstream& muhstream);
int guess(std::string_view muhstring, std::map<char, double> muhvec);
std::string guesss(std::string s, std::map<char, double> muhvec);

#endif // MAIN_HPP

