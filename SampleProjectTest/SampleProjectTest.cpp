



#include "gtest/gtest.h"
#include "../SampleProject/Calculation.h"

// adding
TEST(Test_Calculation, Adding)
{
	EXPECT_EQ(5, add(2, 3));
	EXPECT_EQ(-7, add(-2, -3));
}

// substracting
TEST(Test_Calculation, Substracting)
{
	EXPECT_EQ(-1, substract(2, 3));
	EXPECT_EQ(-7, substract(-2, -3));
}

// multiplying
TEST(Test_Calculation, Multiplying)
{
	EXPECT_EQ(6, multiply(2, 3));
	EXPECT_EQ(-7, multiply(-2, -3));
}

// dividing
TEST(Test_Calculation, Dividing)
{
	EXPECT_EQ(2, divide(10, 5));
	EXPECT_EQ(-7, divide(15, -3));
}