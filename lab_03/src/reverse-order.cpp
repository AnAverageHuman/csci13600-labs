#include "main.hpp"

std::stringstream ssnek;

void muhfunc(const std::string *date, const Muhrow mr) {
    ssnek << *date;
    ssnek << "  ";
    ssnek << mr.awe;
    ssnek << " ft";
    ssnek << std::endl;

}

std::string reverse(const std::string date1, const std::string date2) {
  read_data();
  ssnek.str("");
  ssnek.clear();
  auto yu = muhdata.find(date2);
  auto el = muhdata.find(date1);
  for (; yu != el && yu != muhdata.end(); yu--) {
    muhfunc(&(yu -> first), yu -> second);
  }
  muhfunc(&(yu -> first), yu -> second);

  return ssnek.str();
}

