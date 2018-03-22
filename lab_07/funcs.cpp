#include <iostream>
#include <string>
#include "funcs.hpp"

using std::string;
using std::cout;
using std::endl;

void testascii(string s) {
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << " " << (int)s[i] << endl;
    }
}

char shiftChar(char c, int rshift) {
    //A = 65
    //Z = 90
    //a = 97
    //z = 122
    int newr = rshift % 26;
    if (newr < 0) {
        newr += 26;
    }
    cout << newr << endl;
    if (0 <= newr && newr <= 25) {
        if ('a' <= c && c <= 'z') {
            c = c - 'a';
            c += newr;
            c %= 26;
            c += 'a';
        }
        if ('A' <= c && c <= 'Z') {
            c = c - 'A';
            c += newr;
            c %= 26;
            c += 'A';
        } 
    }
    else {
        cout << "Enter a valid rshift! (0 <= x <= 25) original c: ";
    }
    return c;
}

string encryptCaesar(string plaintext, int rshift) {
    string res = "";
    for (int i = 0; i < plaintext.size(); i++) {
        res += shiftChar(plaintext[i], rshift);
    }
    return res;
}

string encryptVigenere(string plaintext, string keyword) {
    string res = "";
    
    return res;
}

string decryptCaesar(string ciphertext, int rshift) {
    string res = "";
    rshift *= -1;
    res += encryptCaesar(ciphertext, rshift);
    return res;
}
