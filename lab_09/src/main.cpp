#include <iostream>

#include "main.hpp"

#define GRN(x) "\x1B[32m" x "\x1B[0m"

int main() {
  std::cout << GRN("Task A");
  std::cout << std::endl;
  Coord3D pointA = {10, 20, 30};
  std::cout << "length(Coord3D{10, 20, 30})";
  std::cout << std::endl;
  std::cout << length(&pointA);
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task B");
  std::cout << std::endl;
  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};
  std::cout << "Address of Coord3D{10, 20, 30}: ";
  std::cout << &pointP;
  std::cout << std::endl;
  std::cout << "Address of Coord3D{-20, 21, -22}: ";
  std::cout << &pointQ;
  std::cout << std::endl;
  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
  std::cout << "ans = ";
  std::cout << ans;
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task C");
  std::cout << std::endl;
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  move(&pos, &vel, 2.0);
  std::cout << pos.x;
  std::cout << " ";
  std::cout << pos.y;
  std::cout << " ";
  std::cout << pos.z;
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task E");
  std::cout << std::endl;
  std::cout << "Position Coord3D{10, 20, 30}";
  std::cout << std::endl;
  Coord3D *ppos = createCoord3D(10, 20, 30);
  std::cout << "Velocity Coord3D{5.5, -1.4, 7.77}";
  std::cout << std::endl;
  Coord3D *pvel = createCoord3D(5.5, -1.4, 7.77);
  move(ppos, pvel, 10.0);
  std::cout << "Coordinates after 10 seconds: ";
  std::cout << (*ppos).x;
  std::cout << " ";
  std::cout << (*ppos).y;
  std::cout << " ";
  std::cout << (*ppos).z;
  std::cout << std::endl;
  deleteCoord3D(ppos);
  deleteCoord3D(pvel);

  std::cout << std::endl;
  std::cout << GRN("Task F");
  std::cout << std::endl;
  Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
  double time = 0.0;
  double dt = 0.1;
  while(time < 3.0) {
    setVelocity(p, 10.0 * time, 0.3, 0.1);
    move(p, dt);
    time += dt;
    std::cout << "Time: ";
    std::cout << time;
    std::cout << " \t";
    std::cout << "Position: ";
    std::cout << getPosition(p).x;
    std::cout << ", ";
    std::cout << getPosition(p).y;
    std::cout << ", ";
    std::cout << getPosition(p).z;
    std::cout << std::endl;
  }
  deleteParticle(p);
  return 0;
}
