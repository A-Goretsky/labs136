#include <iostream>
#include <string>
#include "profile.hpp"
#include "network.hpp"

using std::string;
using std::cout;
using std::endl;

int main() {
    cout << "\n~~~~~~~~~~~~~~ TASK C ~~~~~~~~~~~~~~\n";
    Network nw2;
    // add three users
    nw2.addUser("mario", "Mario");
    nw2.addUser("luigi", "Luigi");
    nw2.addUser("yoshi", "Yoshi");

    // make them follow each other
    nw2.follow("mario", "luigi");
    nw2.follow("mario", "yoshi");
    nw2.follow("luigi", "mario");
    nw2.follow("luigi", "yoshi");
    nw2.follow("yoshi", "mario");
    nw2.follow("yoshi", "luigi");

    // add a user who does not follow others
    nw2.addUser("wario", "Wario");
    
    // add clone users who follow @mario
    for(int i = 2; i < 6; i++) {
        string usrn = "mario" + std::to_string(i);
        string dspn = "Mario " + std::to_string(i);
        nw2.addUser(usrn, dspn);
        nw2.follow(usrn, "mario");
    }
    // additionally, make @mario2 follow @luigi
    nw2.follow("mario2", "luigi");

    nw2.printDot();
}