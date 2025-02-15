#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "movie.h"
#include "movie_factory.h"

TEST_CASE("Add Matrices- Case #1") {
	Matrix m1 = { {1,0} , {1, 0} };
	Matrix m2 = { {1,0}, {1,0} };
	Matrix addedMatrix = addMatrices(m1, m2);
	Matrix passMatrix = { {2, 0},{2, 0} };
	Matrix failMatrix = { {1,0} , {1,0} };


	REQUIRE(addedMatrix == passMatrix);
	REQUIRE_FALSE(addedMatrix == failMatrix);

}

TEST_CASE("Add Matrices- Case #2") {
	Matrix m1 = { {-1,0} , {1, 0} };
	Matrix m2 = { {1,0}, {1,0} };
	Matrix addedMatrix = addMatrices(m1, m2);
	Matrix passMatrix = { {0, 0},{2, 0} };
	Matrix failMatrix = { {1,0} , {1,0} };


	REQUIRE(addedMatrix == passMatrix);
	REQUIRE_FALSE(addedMatrix == failMatrix);

}



TEST_CASE("Add Matrices- Throw Exception") {
	Matrix m1 = { {1,0} , {1, 0}, {1,0} };
	Matrix m2 = { {1,0}, {1,0} };

	REQUIRE_THROWS_AS(addMatrices(m1, m2), std::invalid_argument);
}

TEST_CASE("Subtract Matrices- Case #1") {
	Matrix m1 = { {1,0} , {1, 0} };
	Matrix m2 = { {1,0}, {1,0} };
	Matrix addedMatrix = subtractMatrices(m1, m2);
	Matrix passMatrix = { {0, 0},{0, 0} };
	Matrix failMatrix = { {1,0} , {1,0} };


	REQUIRE(addedMatrix == passMatrix);
	REQUIRE_FALSE(addedMatrix == failMatrix);

}

TEST_CASE("Subtract Matrices- Case #2") {
	Matrix m1 = { {-1,0} , {1, 0} };
	Matrix m2 = { {1,0}, {1,0} };
	Matrix addedMatrix = addMatrices(m1, m2);
	Matrix passMatrix = { {0, 0},{2, 0} };
	Matrix failMatrix = { {0,0} , {1,0} };


	REQUIRE(addedMatrix == passMatrix);
	REQUIRE_FALSE(addedMatrix == failMatrix);

}

TEST_CASE("Subtract Matrices- Throw Exception") {
	Matrix m1 = { {1,0} , {1, 0}, {1,0} };
	Matrix m2 = { {1,0}, {1,0} };

	REQUIRE_THROWS_AS(subtractMatrices(m1, m2), std::invalid_argument);
}


TEST_CASE("Multiply Matrices- Case #1") {
	Matrix m1 = { {1,2},{3,4} };
	Matrix m2 = { {2,3},{4,2} };
	Matrix passMatrix = { {10, 7},{22, 17} };
	Matrix multipliedMatrix = multiplyMatrices(m1, m2);

	REQUIRE(passMatrix == multipliedMatrix);
		
}

TEST_CASE("Multiply Matrices- Case #2") {
	Matrix m1 = { {1,2,3} };
	Matrix m2 = { {3},{4},{5} };
	Matrix passMatrix = { {26} };
	Matrix multipliedMatrix = multiplyMatrices(m1, m2);

	REQUIRE(passMatrix == multipliedMatrix);

}



TEST_CASE("Multiply Matrices- Throw Exception") {
	Matrix m1 = { {1,2, 3},{3,4, 5} };
	Matrix m2 = { {2,3},{4,2} };

	REQUIRE_THROWS_AS(multiplyMatrices(m1, m2), std::invalid_argument);

}




