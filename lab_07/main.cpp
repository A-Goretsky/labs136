#include <iostream>
#include <string>
#include "funcs.hpp"

using std::string;
using std::cout;
using std::endl;

int main() {
    testascii("hello");
    cout << shiftChar('h', 4) << endl;
    cout << shiftChar('h', 30) << endl;
    cout << encryptCaesar("hello", 4) << endl;
    cout << encryptCaesar("hello", -4) << endl;
    cout << encryptCaesar("lipps", -4) << endl;
    cout << decryptCaesar("lipps", 4) << endl;
}