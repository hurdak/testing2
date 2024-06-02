#include <pch.h>
#include <iostream>
#include <vector>
#include "Source.cpp"

TEST(AdditionVecTester, EmptyVector) {
	std::vector<int> input = { };
	std::vector<int> assumption = { };
	ASSERT_EQ(addition_vec(input, 2), assumption);
}


TEST(AddtionVecTester, SimpleChangeVector) {
	std::vector<int> input = { 1, 2, 3, 4, 5, 6 };
	std::vector<int> assumptions = { 3, 4, 5, 6, 7, 8 };
	ASSERT_EQ(addition_vec(input, 2), assumptions);
}
