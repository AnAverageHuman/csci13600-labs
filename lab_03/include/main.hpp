#ifndef MAIN_HPP
#define MAIN_HPP

#include <limits>
#include <map>
#include <sstream>
#include <string>

struct Muhrow {
  double aes;
  double aee;
  double aws;
  double awe;
};

extern std::map<std::string, Muhrow> muhdata;
extern std::stringstream ssnek;

bool read_data();
double east_storage(const std::string &s);
double min_storage();
double max_storage();
std::string compare(std::string date1, std::string date2);
std::string reverse(std::string date1, std::string date2);

#endif // MAIN_HPP

