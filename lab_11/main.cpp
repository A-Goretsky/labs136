#include <iostream>
#include "funcs.hpp"
#include "def.hpp"

using std::cout;
using std::endl;

int main() {
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};
    Coord3D pointR = {1, 2, 5}; //
    Coord3D pointS = {0, 0, 0}; //

    Coord3D vel1 = {1, -5, 0.2};
    Coord3D vel2 = {1, 1, 0};
    Coord3D vel3 = {-2, 32, 2};
    Coord3D vel4 = {-5, 7, 8};
    move(&pointP, &vel1, 2.0);
    move(&pointQ, &vel2, 2.0);
    move(&pointR, &vel3, 2.0);
    move(&pointS, &vel4, 2.0);

    cout << length(&pointP) << "\n";
    cout << length(&pointQ) << "\n";

    cout << "Address of P: " << &pointP << endl;
    cout << "Address of Q: " << &pointQ << endl << endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
    cout << "ans = " << ans << endl;

    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0);
    cout << pos.x << " " << pos.y << " " << pos.z << endl;
    cout << pointP.x << " " << pointP.y << " " << pointP.z << endl;
    cout << pointQ.x << " " << pointQ.y << " " << pointQ.z << endl;
    cout << pointR.x << " " << pointR.y << " " << pointR.z << endl;
    cout << pointS.x << " " << pointS.y << " " << pointS.z << endl;

    
    Coord3D *test = createCoord3D(0, 0, 100.0);
    move(test, &vel, 2.0);
    cout << test->x << " " << test->y << " " << test->z << endl;
    // prints: 2 -10 100.4
    deleteCoord3D(test);
    cout << "\n";
    // make new particle
    Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
    double time = 0.0;
    double dt = 0.1;
    while(time < 3.0) {
        // update its velocity
        setVelocity(p, 10.0 * time, 0.3, 0.1);

        // move the particle
        moveParticle(p, dt);
        time += dt;

        // reporting its coordinates
        cout << "Time: " << time << " \t";
        cout << "Position: "
             << getPosition(p).x << ", "
             << getPosition(p).y << ", "
             << getPosition(p).z << endl;
    }
    // remove the particle, deallocating its memory
    deleteParticle(p);
    
    return 0;
}