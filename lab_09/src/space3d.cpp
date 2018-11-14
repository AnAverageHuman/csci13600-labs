#include <cmath>

#include "main.hpp"

double length(Coord3D *p) {
  return std::sqrt(p->x * p->x + p->y * p->y + p->z * p->z);
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
  return length(p1) > length(p2) ? p1 : p2;
}

void move(Coord3D *ppos, Coord3D *pvel, double dt) {
  ppos->x += pvel->x * dt;
  ppos->y += pvel->y * dt;
  ppos->z += pvel->z * dt;
}

