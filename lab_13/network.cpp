#include <iostream>
#include <string>
#include "network.hpp"

using std::cout;
using std::string;

Network::Network() {
    numUsers = 0;
    for (int i = 0; i < MAX_USERS; i++) {
        for (int k = 0; k < MAX_USERS; k++) {
            following[i][k] = false;
        }
    }
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

bool Network::follow(string usern1, string usern2) {
    int ind1 = findID(usern1);
    int ind2 = findID(usern2);
    if (ind1 != -1 && ind2 != -1) {
        following[ind1][ind2] = true;
        return true;
    }
    return false;
}

void Network::printDot() {
    cout << "digraph {\n";
    for (int i = 0; i < numUsers; i++) {
        cout << "\t\"@" << profiles[i].username() << "\"\n";
    }
    cout << "\n";
    for (int r = 0; r < MAX_USERS; r++) {
        for (int c = 0; c < MAX_USERS; c++) {
            if (following[r][c] == true)
                cout << "\t\"@" << profiles[r].username() << "\" -> \"@" << profiles[c].username() << "\"\n";
        }
    }
    cout << "}\n";
}