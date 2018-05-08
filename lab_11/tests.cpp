#include <iostream>
#include <string>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.hpp"
#include "def.hpp"
#include "../doctest/doctest/doctest.h"

bool operator==(const Coord3D& lhs, const Coord3D& rhs) {
    return (lhs.x == rhs.x && lhs.y == rhs.y && lhs.z == rhs.z);
}

bool operator==(const Particle& lhs, const Particle& rhs) {
    return (lhs.x == rhs.x && lhs.y == rhs.y && lhs.z == rhs.z && lhs.vx == rhs.vx && lhs.vy == rhs.vy && lhs.vz == rhs.vz);
}

TEST_CASE("length and fartherFromOrigin") {
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};
    Coord3D pointR = {1, 2, 5};
    Coord3D pointS = {0, 0, 0};
    SUBCASE("length") {
        CHECK_EQ(length(&pointP), doctest::Approx(37.4165738677).epsilon(.0001));
        CHECK_EQ(length(&pointQ), doctest::Approx(36.4005494464).epsilon(.0001));
        CHECK_EQ(length(&pointR), doctest::Approx(5.4772255751).epsilon(.0001));
        CHECK_EQ(length(&pointS), doctest::Approx(0.0).epsilon(.0001));
    }
    
    SUBCASE("fartherFromOrigin") {
        CHECK_EQ(fartherFromOrigin(&pointP, &pointQ), &pointP);
        CHECK_EQ(fartherFromOrigin(&pointQ, &pointR), &pointQ);
        CHECK_EQ(fartherFromOrigin(&pointS, &pointR), &pointR);
        CHECK_EQ(fartherFromOrigin(&pointP, &pointR), &pointP);
    }
}

TEST_CASE("move") {
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};
    Coord3D pointR = {1, 2, 5};
    Coord3D pointS = {0, 0, 0};
    Coord3D vel1 = {1, -5, 0.2};
    Coord3D vel2 = {1, 1, 0};
    Coord3D vel3 = {-2, 32, 2};
    Coord3D vel4 = {-5, 7, 8};
    move(&pointP, &vel1, 2.0);
    move(&pointQ, &vel2, 2.0);
    move(&pointR, &vel3, 2.0);
    move(&pointS, &vel4, 2.0);
    CHECK_EQ(pointP, Coord3D{12,10,30.4});
    CHECK_EQ(pointQ, Coord3D{-18,23,-22});
    CHECK_EQ(pointR, Coord3D{-3,66,9});
    CHECK_EQ(pointS, Coord3D{-10,14,16});
}

 
TEST_CASE("createCoord") {
    CHECK_EQ(*createCoord3D(0, 5, 3), Coord3D{0, 5, 3});
    CHECK_EQ(*createCoord3D(15, 2, -4), Coord3D{15, 2, -4});
    CHECK_EQ(*createCoord3D(-7, 8, 3), Coord3D{-7, 8, 3});
    CHECK_EQ(*createCoord3D(1, 9, 0), Coord3D{1, 9, 0});
}

TEST_CASE("deleteCoord") {
    deleteCoord3D(createCoord3D(0, 5, 3));
    deleteCoord3D(createCoord3D(15, 2, -4));
    deleteCoord3D(createCoord3D(-7, 8, 3));
    deleteCoord3D(createCoord3D(1, 9, 0));
}

TEST_CASE("createParticle") {
    CHECK_EQ(*createParticle(1, 2, 3, 4, 5, 6), Particle{1, 2, 3, 4, 5, 6});
    CHECK_EQ(*createParticle(7, 8, 9, 10, 11, 12), Particle{7, 8, 9, 10, 11, 12});
}

TEST_CASE("deleteParticle") {
    deleteParticle(createParticle(1, 2, 3, 4, 5, 6));
    deleteParticle(createParticle(1, 2, 3, 4, 5, 6));
}

TEST_CASE("setVelocity") {
    Particle p{10, 12, 14, 1, 3, 7};
    setVelocity(&p, 3, 6, 4);
    CHECK_EQ(p, Particle{10, 12, 14, 3, 6, 4});
    setVelocity(&p, 8, 12, 90);
    CHECK_EQ(p, Particle{10, 12, 14, 8, 12, 90});
}

TEST_CASE("getPosition") {
    Particle p{10, 12, 14, 1, 3, 7};
    CHECK_EQ(getPosition(&p), Coord3D{10, 12, 14});
    Particle p2{1, 2, 3, 1, 3, 7};
    CHECK_EQ(getPosition(&p2), Coord3D{1, 2, 3});
}

TEST_CASE("moveParticle") {
    Particle p{10, 12, 14, 1, 3, 7};
    moveParticle(&p, 2);
    CHECK_EQ(p, Particle{12, 18, 28, 1, 3, 7});
    Particle p2{1, 2, 3, 4, 5, 6};
    moveParticle(&p2, 3);
    CHECK_EQ(p2, Particle{13, 17, 21, 4, 5, 6});
}