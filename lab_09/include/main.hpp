#ifndef MAIN_HPP
#define MAIN_HPP

struct Coord3D {
    double x;
    double y;
    double z;
};

double length(Coord3D *p);
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2);

#endif // MAIN_HPP

