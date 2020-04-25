#include <gtest/gtest.h>

std::string fizzBuzz(int value){
	return "1";
}

TEST(FizzBuzzTest, Returns1With1PassesIn){
	std::string result = fizzBuzz(1);
	ASSERT_STREQ("1", result.c_str());
}
