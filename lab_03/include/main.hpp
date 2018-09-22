#ifndef MAIN_HPP
#define MAIN_HPP

#include <limits>
#include <map>
#include <string>

struct Muhrow {
  double aes;
  double aee;
  double aws;
  double awe;
};

extern std::map<std::string, Muhrow> muhdata;

bool read_data();
double east_storage(const std::string &s);
double min_storage();
double max_storage();

#endif // MAIN_HPP

