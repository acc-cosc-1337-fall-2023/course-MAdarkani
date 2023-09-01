#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "int.h"
#include "decimals.h"
#include "char.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*test case echo_variable */

/*test case add_to_double_1 with 0 as parameter*/

TEST_CASE ("Test the add to double 1 function","testing the decimal inconsistencies")
{
		//REQUIRE (.9 ==add_to_double_1(0));
}

/*test case add_to_double_1 with 1 as parameter*/
TEST_CASE ("Test the add to double 2 function","testing the decimal inconsistencies")
{
		REQUIRE (.9 ==add_to_double_2(0));
}

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */

TEST_CASE("Test the get+char ascii value function", "char to int conversion") 
{
	REQUIRE(65 == get_char_ascii_value('A'));
	REQUIRE(97 == get_char_ascii_value('a'));
	REQUIRE(98 == get_char_ascii_value('b'));
}


/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

