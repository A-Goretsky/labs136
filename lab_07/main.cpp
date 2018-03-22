#include <iostream>
#include <string>
#include "funcs.hpp"

using std::string;
using std::cout;
using std::endl;

int main() {
    cout << "~~~~ testascii ~~~~" << endl;
    testascii("hello");
    testascii("cat: dog!");

    cout << "\n~~~~ shiftchar ~~~~" << endl;
    cout << shiftChar('h', 4) << endl;
    cout << shiftChar('h', 30) << endl;
    cout << shiftChar('h', -4) << endl;
    cout << shiftChar('h', 0) << endl;
    cout << shiftChar('!', 5) << endl;

    cout << "\n~~~~ encryptCaesar ~~~~" << endl;
    cout << encryptCaesar("hello", 4) << endl;
    cout << encryptCaesar("hello", -4) << endl;
    cout << encryptCaesar("lipps", -4) << endl;
    cout << encryptCaesar("Hello, World!", 4) << endl;
    
    cout << "\n~~~~ decryptCaesar ~~~~" << endl;
    cout << decryptCaesar("lipps", 4) << endl;
    cout << decryptCaesar("Lipps, Asvph!", 4) << endl;
    
    
    cout << "\n~~~~ encryptVigenere ~~~~" << endl;
    cout << encryptVigenere("Hello, World!", "cake") << endl;
    cout << encryptVigenere("My name is Anne and I love to play the Xylophone.", "round") << endl;

    cout << "\n~~~~ decryptVigenere ~~~~" << endl;
    cout << decryptVigenere("Jevpq, Wyvnd!", "cake") << endl;
    cout << decryptVigenere("Dm hnpv wm Nqes uag Z ziih kc jydp hbr Apzickfby.", "round") << endl;
}