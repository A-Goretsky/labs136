#include <iostream>
#include <cmath>
#include "def.hpp"

using std::cout;

double length(Coord3D *p) {
    return sqrt(pow(p->x, 2) + pow(p->y, 2) + pow(p->z, 2) );
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
    if (length(p1) >= length(p2))
        return p1;
    else
        return p2; 
}

void move(Coord3D *ppos, Coord3D *pvel, double dt) {
    ppos->x += pvel->x * dt;
    ppos->y += pvel->y * dt;
    ppos->z += pvel->z * dt;
}

Coord3D * createCoord3D(double x, double y, double z) {
    Coord3D *point = new Coord3D;
    *point = {x, y, z};
    return point;
}

void deleteCoord3D(Coord3D *p) {
    delete p;
}

Particle * createParticle(double x, double y, double z, double vx, double vy, double vz) {
    Particle *dot = new Particle;
    *dot = {x, y, z, vx, vy, vz};
    return dot;
}

void deleteParticle(Particle *p) {
    delete p;
}

void setVelocity(Particle *p, double vx, double vy, double vz) {
    p->vx = vx;
    p->vy = vy;
    p->vz = vz;
}

Coord3D getPosition(Particle *p) {
    return Coord3D{p->x, p->y, p->z};
}

void moveParticle(Particle *p, double dt) {
    p->x += p->vx * dt;
    p->y += p->vy * dt;
    p->z += p->vz * dt;
}