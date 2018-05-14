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
}