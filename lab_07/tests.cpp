#include <iostream>
#include <string>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.hpp"
#include "../doctest/doctest/doctest.h"

TEST_CASE("Cipher Tetsing") {
    SUBCASE("shiftchar") {
        CHECK(shiftChar('h', 4) == 'l');
        CHECK(shiftChar('h', 30) == 'l');
        CHECK(shiftChar('h', -4) == 'd');
        CHECK(shiftChar('h', 0) == 'h');
        CHECK(shiftChar('!', 4) == '!');
    }
    SUBCASE("encryptCaesar") {
        CHECK(encryptCaesar("hello", 4) == "lipps");
        CHECK(encryptCaesar("hello", -4) == "dahhk");
        CHECK(encryptCaesar("lipps", -4) == "hello");
        CHECK(encryptCaesar("Hello, World!", 4) == "Lipps, Asvph!");
    }
    SUBCASE("decryptCaesar") {
        CHECK(decryptCaesar("lipps", 4) == "hello");
        CHECK(decryptCaesar("Lipps, Asvph!", 4) == "Hello, World!");
    }
    SUBCASE("encryptVigenete") {
        CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
        CHECK(encryptVigenere("My name is Anne and I love to play the Xylophone.", "round") == "Dm hnpv wm Nqes uag Z ziih kc jydp hbr Apzickfby.");
    }
    SUBCASE("decryptVigenete") {
        CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
        CHECK(decryptVigenere("Dm hnpv wm Nqes uag Z ziih kc jydp hbr Apzickfby.", "round") == "My name is Anne and I love to play the Xylophone.");
    }
}