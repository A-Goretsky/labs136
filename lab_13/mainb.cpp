#include <iostream>
#include <string>
#include "profile.hpp"
#include "network.hpp"

using std::string;
using std::cout;
using std::endl;

int main() {
    cout << "\n~~~~~~~~~~~~~~ TASK B ~~~~~~~~~~~~~~\n";
    
    Network nw;
    
    cout << "(adding user mario)\n" << nw.addUser("mario", "Mario") << endl;     // true (1)
    cout << "(adding user luigi)\n" << nw.addUser("luigi", "Luigi") << endl;     // true (1)

    cout << "(try but fail to add variants of mario2)" << endl;
    cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
    cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
    cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)
    
    cout << "(adding variants of mario, 2-20)" << endl;
    for(int i = 2; i < 20; i++)
        cout << nw.addUser("mario" + std::to_string(i), 
                   "Mario" + std::to_string(i)) << endl;   // true (1)

    cout << "(try to add user past max user amount)" << endl;
    cout << nw.addUser("yoshi", "Yoshi") << endl;     // false (0)
    
}