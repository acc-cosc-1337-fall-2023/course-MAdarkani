#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "void.h"
#include "val_ref.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test function value param")
{
	int num = 10;
	
	value_param(num);

	REQUIRE(num == 10);
}

TEST_CASE("Test function reference parameter")
{
	int num = 10;

	ref_param(num);

	REQUIRE(num == 20);
	
}