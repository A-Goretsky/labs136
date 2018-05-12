#include <iostream>
#include <string>
#include "profile.hpp"

Profile::Profile(string usr, string disp) {
    user_n = usr;
    display_n = disp;
}

Profile::Profile() {
    user_n = "";
    display_n = "";
}

void Profile::username(string user) {
    user_n = user;
}

string Profile::username() {
    return user_n;
}

void Profile::dispname(string disp) {
    display_n = disp;
}

string Profile::dispname() {
    return display_n;
}

string Profile::fullname() {
    string res = "";
    res += display_n + " " + "(@" + user_n + ")";
    return res;
}