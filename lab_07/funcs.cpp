#include <iostream>
#include <string>
#include <cctype>
#include "funcs.hpp"

using std::string;
using std::cout;
using std::endl;

void testascii(string s) {
    for (int i = 0; i < (int)s.size(); i++) {
        cout << s[i] << " " << (int)s[i] << endl;
    }
}

char shiftChar(char c, int rshift) {
    int newr = rshift % 26;
    if (newr < 0) {
        newr += 26;
    }
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
    for (int i = 0; i < (int)plaintext.size(); i++) {
        res += shiftChar(plaintext[i], rshift);
    }
    return res;
}

string encryptVigenere(string plaintext, string keyword) {
    string res = "";
    int ctr = 0;
    int cur_rshift = 0;
    for (int i = 0; i < (int)plaintext.size(); i++) {
        if (isalpha(plaintext[i]) != 0) {
            if (ctr == (int)keyword.size())
                ctr = 0;
            if ('a' <= keyword[ctr] && keyword[ctr] <= 'z') {
                //cout << keyword[i] - 97;
                cur_rshift = (int) (keyword[ctr] - 97);
            }
            if ('A' <= keyword[ctr] && keyword[ctr] <= 'Z') {
                //cout << keyword[i] - 65;
                cur_rshift =  (int) (keyword[ctr] - 65);
            }
            ctr++;
        }
        else {
            cur_rshift = 0;
        }
        res += shiftChar(plaintext[i], cur_rshift);
    }
    return res;
}

string decryptCaesar(string ciphertext, int rshift) {
    string res = "";
    rshift *= -1;
    res += encryptCaesar(ciphertext, rshift);
    return res;
}

string decryptVigenere(string ciphertext, string keyword) {
    string res = "";
    int ctr = 0;
    int cur_rshift = 0;
    for (int i = 0; i < (int) ciphertext.size(); i++) {
        if (isalpha(ciphertext[i]) != 0) {
            if (ctr == (int)keyword.size())
                ctr = 0;
            if ('a' <= keyword[ctr] && keyword[ctr] <= 'z') {
                //cout << keyword[i] - 97;
                cur_rshift = (-1) * ((int) (keyword[ctr] - 97));
            }
            if ('A' <= keyword[ctr] && keyword[ctr] <= 'Z') {
                //cout << keyword[i] - 65;
                cur_rshift = (-1) * ((int) (keyword[ctr] - 65));
            }
            ctr++;
        }
        else {
            cur_rshift = 0;
        }
        res += shiftChar(ciphertext[i], cur_rshift);
    }
    return res;
}