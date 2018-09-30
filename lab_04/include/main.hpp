#ifndef MAIN_HPP
#define MAIN_HPP

#include <string>

const char MUH_CHAR = '*';
const char MUH_SPACE = ' ';
const std::string MUH_SHAR = "*";
const std::string MUH_CHAR_SPACE = "* ";
const std::string MUH_SPACE_CHAR = " *";

std::string box(int width, int height);
std::string checkerboard(int width, int height);
std::string cross(int size);
std::string lower(int length);

#endif // MAIN_HPP

