#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.hpp"

#include "../doctest/doctest/doctest.h"

  TEST_CASE("Testing all Methods") {
    SUBCASE("Testing isDivisibleBy") {
      CHECK(isPrime(2) == true);
      CHECK(nextPrime(-5) == 2);
      CHECK(isDivisibleBy(2, 0) == 0);
      CHECK(isDivisibleBy(2, 2) == 1);
      CHECK(isDivisibleBy(4, 1) == 1);
      CHECK(isDivisibleBy(6, 3) == 1);
      CHECK(isDivisibleBy(6, 4) == 0);
    }
    SUBCASE("Testing isPrime") {
      CHECK(isPrime(-1) == 0);
      CHECK(isPrime(2) == 1);
      CHECK(isPrime(0) == 0);
      CHECK(isPrime(4) == 0);
      CHECK(isPrime(38083) == 1);
    }
    SUBCASE("Testing nextPrime") {
      CHECK(nextPrime(-5) == 2);
      CHECK(nextPrime(2) == 3);
      CHECK(nextPrime(3) == 5);
      CHECK(nextPrime(97) == 101);
    }
    SUBCASE("Testing countPrimes") {
      CHECK(countPrimes(0, 10) == 4);
      CHECK(countPrimes(10, 100) == 21);
    }
    SUBCASE("Testing isTwinPrime") {
      CHECK(isTwinPrime(1) == 0);
      CHECK(isTwinPrime(2) == 0);
      CHECK(isTwinPrime(3) == 1);
      CHECK(isTwinPrime(17) == 1);
      CHECK(isTwinPrime(19) == 1);
    }
    SUBCASE("Testing nextTwinPrime") {
      CHECK(nextTwinPrime(18) == 19);
      CHECK(nextTwinPrime(-10) == 3);
      CHECK(nextTwinPrime(31) == 41);
    }
    SUBCASE("Testing largestTwinPrime") {
      CHECK(largestTwinPrime(0, 100) == 73);
      CHECK(largestTwinPrime(-10, -5) == -1);
      CHECK(largestTwinPrime(60, 10) == 59);
      CHECK(largestTwinPrime(100, 1000) == 883);
    }
  }
