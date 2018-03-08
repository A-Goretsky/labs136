#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.hpp"

#include "../doctest/doctest/doctest.h"

TEST_CASE() {
  CHECK(isPrime(2) == true);
  CHECK(nextPrime(-5) == 2);
}
