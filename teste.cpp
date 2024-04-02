#define CATCH_CONFIG_MAIN

#include "dominios.hpp"
#include "dominios.cpp"
#include "catch.hpp"

TEST_CASE("OLA","GREER") {

	Percentual t1;
	t1.setPercentual(50);

	REQUIRE(t1.getPercentual() == 50);

}
