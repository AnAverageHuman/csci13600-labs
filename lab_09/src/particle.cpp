#include <algorithm>
#include <list>

#include "main.hpp"

std::list<Particle> elp;

Particle* createParticle(double x, double y, double z, double vx, double vy, double vz) {
  elp.emplace_back(Particle{Coord3D{x, y, z}, Coord3D{vx, vy, vz}});
  return &elp.back();
}

void setVelocity(Particle *p, double vx, double vy, double vz) {
  p->v.x = vx;
  p->v.y = vy;
  p->v.z = vz;
}

Coord3D getPosition(Particle *p) {
  return p->p;
}

void move(Particle *p, double dt) {
  move(&(p->p), &(p->v), dt);
}

bool operator==(const Particle a, const Particle b) {
  return a.p.x == b.p.x && a.p.y == b.p.y && a.p.z == b.p.z && a.v.x == b.v.x &&
    a.v.y == b.v.y && a.v.z == b.v.z;
}

void deleteParticle(Particle *p) {
  std::list<Particle>::iterator it = std::find(elp.begin(), elp.end(), *p);
  elp.erase(it);
}
