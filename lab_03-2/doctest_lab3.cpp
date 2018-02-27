#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "ashokan.h"

#include "../doctest/doctest/doctest.h"


  TEST_CASE("Testing Anton's code for the first task")
  {
    CHECK(east_storage("12/12/2016")==51.98);
    CHECK(east_storage("02/15/2016")==74.91);
    CHECK(compare("09/13/2016", "09/17/2016")
		      == "09/13/2016 East\n09/14/2016 East\n09/15/2016 Equal\n09/16/2016 West\n09/17/2016 West\n");
		CHECK(compare("09/17/2016", "09/13/2016") == "");
    CHECK(reverse_order("05/29/2016", "06/02/2016") ==
			"06/02/2016  587.66 ft\n"
			"06/01/2016  587.81 ft\n"
			"05/31/2016  587.93 ft\n"
			"05/30/2016  588.02 ft\n"
			"05/29/2016  588.17 ft\n");
		CHECK(reverse_order("06/02/2016", "05/29/2016") == "");
  }
