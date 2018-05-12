#include <iostream>
#include <string>
#include "profile.hpp"
#include "network.hpp"

using std::string;
using std::cout;
using std::endl;

int main() {
    Profile p1("marco", "Marco");    
    cout << p1.username() << endl; // marco
    cout << p1.fullname() << endl; // Marco (@marco)

    p1.dispname("Marco Rossi"); 
    cout << p1.username() << endl; // marco
    cout << p1.fullname() << endl; // Marco Rossi (@marco)
    
    Profile p2("tarma1", "Tarma Roving");    
    cout << p2.username() << endl; // tarma1
    cout << p2.fullname() << endl; // Tarma Roving (@tarma1)

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
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
}