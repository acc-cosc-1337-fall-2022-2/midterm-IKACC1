#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"
#include <iostream>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
TEST_CASE("TEST roll_die")
{	
srand(time(NULL));/* must call srand in test case/main because instructions say to use loop. Calling inside function would cause the same numbers to be displayed repeatedly*/

	for (int x=0; x<=15;x++)
		{
			int dice_roll = roll_die();
			REQUIRE(dice_roll >=1);
			REQUIRE(dice_roll<=6);
		}
}