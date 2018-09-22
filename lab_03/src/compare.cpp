#include "main.hpp"

void muhfunc(const std::string date, const Muhrow mr) {
  ssnek << date;
  ssnek << " ";
  if (mr.aee > mr.awe) {
    ssnek << "East";
  } else if (mr.aee < mr.awe) {
    ssnek << "West";
  } else {
    ssnek << "Equal";
  }

  ssnek << std::endl;
}

std::string compare(std::string date1, std::string date2) {
  read_data();
  ssnek.str("");
  ssnek.clear();  // NOLINT

  auto el = muhdata.find(date1);
  auto yu = muhdata.find(date2);
  for (; el != yu && el != muhdata.end(); el++) {
    muhfunc(el -> first, el -> second);
  }
  muhfunc(yu -> first, yu -> second);
  return ssnek.str();
}

