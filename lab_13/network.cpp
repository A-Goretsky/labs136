#include <iostream>
#include <string>
#include "network.hpp"

using std::cout;
using std::string;

Network::Network() {
    numUsers = 0;
}

int Network::findID(string usrn) {
    for (int i = 0; i < 20; i++) {
        if (profiles[i].username() == usrn)
            return i;
    }
    return -1;
}

bool Network::addUser(string usrn, string dispn) {
    if (numUsers == 20) {
        return false;
    }
    for (int i = 0; i < (int) usrn.size(); i++) {
        if (!isalnum(usrn[i]))
            return false;
    }
    for (int i = 0; i < MAX_USERS; i++) {
        if (usrn == profiles[i].username())
            return false;
    }
    profiles[numUsers] = Profile(usrn, dispn);
    numUsers += 1;
    return true;
}
