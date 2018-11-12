#include <cmath>

#include "main.hpp"

double length(Coord3D *p) {
  return std::sqrt(p->x * p->x + p->y * p->y + p->z * p->z);
}

