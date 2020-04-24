// // #include <gtest/gtest.h>

// bool isMultiple( int value, int base ){
// 	return (0 == (value % base));
// }


// std::string fizzBuzz(int value){
// 	if( isMultiple(value, 3) && isMultiple(value, 5) )
// 		return "FizzBuzz";
// 	if( isMultiple(value, 3) )
// 		return "Fizz";
// 	if( isMultiple(value, 5) )
// 		return "Buzz";
// 	return std::to_string(value);
// }

// void checkFizzBuzz(int value, std::string expectedResult ){
// 	std::string result = fizzBuzz(value);
// 	ASSERT_STREQ(expectedResult.c_str(), result.c_str());
// }
