#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Testing the Factorial") 
{
	REQUIRE(factorial(3) == 6);
	REQUIRE(factorial(5) == 120);
	REQUIRE(factorial(6) == 720);
}



TEST_CASE("Testing the Great Common Divisor") 
{
	REQUIRE(great_common_divisor(5,15) == 5);
	REQUIRE(great_common_divisor(21,28) == 7);
	REQUIRE(great_common_divisor(25,100) == 25);
}