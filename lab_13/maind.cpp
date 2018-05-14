#include <iostream>
#include <string>
#include "profile.hpp"
#include "network.hpp"

using std::string;
using std::cout;
using std::endl;

int main() {
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