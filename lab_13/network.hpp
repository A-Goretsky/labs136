#include <iostream>
#include <string>
#include "profile.hpp"

using std::cout;
using std::string;

struct Post {
    string username;
    string message;
};

class Network {
    private:
        static const int MAX_USERS = 20;
        static const int MAX_POSTS = 100;
        int numUsers;
        int numPosts;
        Profile profiles[MAX_USERS];
        int findID(string usrn);
        bool following[MAX_USERS][MAX_USERS];
        Post posts[MAX_POSTS];
    public:
        Network();
        bool addUser(string usrn, string dispn);
        bool follow(string usern1, string usern2);
        void printDot();
        bool writePost(string usrn, string msg);
        bool printTimeline(string usrn);
};