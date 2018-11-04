#ifndef MAIN_HPP
#define MAIN_HPP

#include <string>
#include <string_view>

std::string removeLeadingSpaces(std::string line);
int countChar(const std::string_view line, char c);
std::string reindent(std::string line);

#endif // MAIN_HPP

