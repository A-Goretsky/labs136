#include "def.hpp"

double length(Coord3D *p);
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2);
void move(Coord3D *ppos, Coord3D *pvel, double dt);
Coord3D * createCoord3D(double x, double y, double z);
void deleteCoord3D(Coord3D *p);
Particle * createParticle(double x, double y, double z, double vx, double vy, double vz);
void deleteParticle(Particle *p);
void setVelocity(Particle *p, double vx, double vy, double vz);
Coord3D getPosition(Particle *p);
void moveParticle(Particle *p, double dt);
