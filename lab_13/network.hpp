#include <iostream>
#include <string>
#include "profile.hpp"

using std::cout;
using std::string;

class Network {
    private:
        static const int MAX_USERS = 20;
        int numUsers;
        Profile profiles[MAX_USERS];
        int findID(string usrn);
    public:
        Network();
        bool addUser(string usrn, string dispn);
};