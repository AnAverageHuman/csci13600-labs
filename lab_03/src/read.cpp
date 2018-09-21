#include <fstream>
#include <iostream>

#include "main.hpp"

#define MUH_CSV "Current_Reservoir_Levels.tsv"

std::map<std::string, Muhrow> muhdata;    // NOLINT

bool read_data() {
  if (muhdata.size() > 0) {
    return true;
  }

  std::ifstream fin(MUH_CSV);   // NOLINT
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading.";
    std::cerr << std::endl;
    exit(1);
  }

  // strip header
  std::string junk;
  getline(fin, junk);

  std::string date;
  Muhrow mr = Muhrow();
  while (fin >> date >> mr.aes >> mr.aee >> mr.aws >> mr.awe) {
    muhdata.insert({date, mr});
  }

  fin.close();
  return true;
}

