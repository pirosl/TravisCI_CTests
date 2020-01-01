#include "dailycodingproblem1.cpp"
#include <gtest/gtest.h>

TEST(DailyCodingProblem1Test, Positive1) { 
	int nums[5] = {1,2,2,7,2};
    	ASSERT_TRUE(problem1(nums, 5, 4));
}

TEST(DailyCodingProblem1Test, Negative1) {
	int nums[5] = {1,2,7,5,9};
	ASSERT_FALSE(problem1(nums, 5, 13));
}

TEST(DailyCodingProblem1Test, Positive2) {
	int num[3] = {3,2,1};
	ASSERT_TRUE(problem1(num, 3, 4));
}

TEST(DailyCoddingProblem1Test, Positive3) {
	int num[0];
	ASSERT_FALSE(problem1(num, 0, 4));
}

int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

