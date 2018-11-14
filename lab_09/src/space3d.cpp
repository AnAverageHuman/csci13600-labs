#include <algorithm>
#include <cmath>
#include <list>

#include "main.hpp"

std::list<Coord3D> el;

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

bool operator==(const Coord3D a, const Coord3D b) {
  return a.x == b.x && a.y == b.y && a.z == b.z;
}

Coord3D * createCoord3D(double x, double y, double z) {
  el.emplace_back(Coord3D{x, y, z});
  return &el.back();
}

void deleteCoord3D(Coord3D *p) {
  std::list<Coord3D>::iterator it = std::find(el.begin(), el.end(), *p);
  el.erase(it);
}
