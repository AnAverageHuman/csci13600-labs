#include <array>

#include "catch.hpp"
#include "main.hpp"

constexpr std::array<std::array<double, 3>, 30> d = {{{1,1.53,2.01},{1.1,1.56,2.02},{1.3,1.59,2.03},{1.6,1.62,2.04},{2,1.65,2.05},{2.5,1.68,2.06},{3.1,1.71,2.07},{3.8,1.74,2.08},{4.6,1.77,2.09},{5.5,1.8,2.1},{6.5,1.83,2.11},{7.6,1.86,2.12},{8.8,1.89,2.13},{10.1,1.92,2.14},{11.5,1.95,2.15},{13,1.98,2.16},{14.6,2.01,2.17},{16.3,2.04,2.18},{18.1,2.07,2.19},{20,2.1,2.2},{22,2.13,2.21},{24.1,2.16,2.22},{26.3,2.19,2.23},{28.6,2.22,2.24},{31,2.25,2.25},{33.5,2.28,2.26},{36.1,2.31,2.27},{38.8,2.34,2.28},{41.6,2.37,2.29},{44.5,2.4,2.3}}};

TEST_CASE("Particle") {
  Particle *a = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
  double dt = 0.1;
  for (int i = 0; i < 30; i++) {
    setVelocity(a, dt * i * 10, 0.3, 0.1);
    move(a, dt);
    Coord3D b = getPosition(a);
    CHECK(b.x == Approx(d[i][0]));
    CHECK(b.y == Approx(d[i][1]));
    CHECK(b.z == Approx(d[i][2]));
  }
  // remove the particle, deallocating its memory
  deleteParticle(a);
}
