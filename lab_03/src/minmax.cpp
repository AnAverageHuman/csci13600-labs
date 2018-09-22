#include "main.hpp"

double min_storage() {
  read_data();
  double muhmin = std::numeric_limits<double>::max();
  for (const auto &muhrow : muhdata) {
    if (muhrow.second.aes < muhmin) {
      muhmin = muhrow.second.aes;
    }
  }

  return muhmin;
}

double max_storage() {
  read_data();
  double muhmax = std::numeric_limits<double>::min();
  for (const auto &muhrow : muhdata) {
    if (muhrow.second.aes > muhmax) {
      muhmax = muhrow.second.aes;
    }
  }

  return muhmax;
}

