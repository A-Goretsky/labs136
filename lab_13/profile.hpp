#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::string;

class Profile {
    private:
        string user_n;
        string display_n;
    public:
        Profile(string usr, string disp);
        Profile();
        void username(string user);
        void dispname(string disp);
        string username();
        string dispname();
        string fullname();
};