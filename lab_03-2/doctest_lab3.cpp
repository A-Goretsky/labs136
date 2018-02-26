#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "ashokan.h"

#include "../doctest/doctest/doctest.h"


  TEST_CASE("Testing Anton's code for the first task")
  {
    CHECK(east_storage("12/12/2016")==51.98);
    CHECK(east_storage("02/15/2016")==74.91);
  }
