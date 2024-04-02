#define CATCH_CONFIG_MAIN

#include "dominios.hpp"
#include "catch.hpp"

using namespace std;


    TEST_CASE("E","A"){

        Percentual t1;
        t1.setPercentual(50);

        REQUIRE(t1.getPercentual()==50);

        t1.setPercentual(100);
        REQUIRE(t1.getPercentual()==100);


    }
