#include <iostream>
#include <string>
#include "profile.hpp"
#include "network.hpp"

using std::string;
using std::cout;
using std::endl;

int main() {
    cout << "~~~~~~~~~~~~~~ TASK A ~~~~~~~~~~~~~~\n";
    Profile p1("marco", "Marco");    
    cout << p1.username() << endl; // marco
    cout << p1.fullname() << endl; // Marco (@marco)

    p1.dispname("Marco Rossi"); 
    cout << p1.username() << endl; // marco
    cout << p1.fullname() << endl; // Marco Rossi (@marco)
    
    Profile p2("tarma1", "Tarma Roving");    
    cout << p2.username() << endl; // tarma1
    cout << p2.fullname() << endl; // Tarma Roving (@tarma1)

    cout << "\n~~~~~~~~~~~~~~ TASK B ~~~~~~~~~~~~~~\n";
    
    Network nw;
    
    cout << nw.addUser("mario", "Mario") << endl;     // true (1)
    cout << nw.addUser("luigi", "Luigi") << endl;     // true (1)

    cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
    cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
    cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)
    
    
    for(int i = 2; i < 20; i++)
        cout << nw.addUser("mario" + std::to_string(i), 
                   "Mario" + std::to_string(i)) << endl;   // true (1)

    cout << nw.addUser("yoshi", "Yoshi") << endl;     // false (0)
    
    
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
    
    cout << "\n~~~~~~~~~~~~~~ TASK D ~~~~~~~~~~~~~~";

    Network nw3;
  // add three users
    nw3.addUser("mario", "Mario");
    nw3.addUser("luigi", "Luigi");
    nw3.addUser("yoshi", "Yoshi");
    
    nw3.follow("mario", "luigi");
    nw3.follow("luigi", "mario");
    nw3.follow("luigi", "yoshi");
    nw3.follow("yoshi", "mario");

    // write some posts
    nw3.writePost("mario", "It's a-me, Mario!");
    nw3.writePost("luigi", "Hey hey!");
    nw3.writePost("mario", "Hi Luigi!");
    nw3.writePost("yoshi", "Test 1");
    nw3.writePost("yoshi", "Test 2");
    nw3.writePost("luigi", "I just hope this crazy plan of yours works!");
    nw3.writePost("mario", "My crazy plans always work!");
    nw3.writePost("yoshi", "Test 3");
    nw3.writePost("yoshi", "Test 4");
    nw3.writePost("yoshi", "Test 5");

    cout << endl;
    cout << "======= Mario's timeline =======" << endl;
    nw3.printTimeline("mario");
    cout << endl;

    cout << "======= Yoshi's timeline =======" << endl;
    nw3.printTimeline("yoshi");
    cout << endl;
}