#include <gtest/gtest.h>

#include <iostream>
#include <string>

std::string fizzbuzz(int input) {
    std::string output = "";
    bool isMultipleOfThree = (input % 3 == 0);
    bool isMultipleOfFive = (input % 5 == 0);
    
    if (isMultipleOfThree)
        output += "Fizz";
    
    if (isMultipleOfFive)
        output += "Buzz";

    if (!isMultipleOfThree && !isMultipleOfFive)
        output += std::to_string(input);

    return output;
}

TEST(fizzbuzz, oneReturnsOne) {
    EXPECT_EQ(fizzbuzz(1), "1");
}

TEST(fizzbuzz, twoReturnsTwo) {
    EXPECT_EQ(fizzbuzz(2), "2");
}

TEST(fizzbuzz, threeReturnsFizz) {
    EXPECT_EQ(fizzbuzz(3), "Fizz");
}

TEST(fizzbuzz, fiveReturnsBuzz) {
    EXPECT_EQ(fizzbuzz(5), "Buzz");
}

TEST(fizzbuzz, fifteenReturnsFizzBuzz) {
    EXPECT_EQ(fizzbuzz(15), "FizzBuzz");
}

TEST(fizzbuzz, thirtyReturnsFizzBuzz) {
    EXPECT_EQ(fizzbuzz(30), "FizzBuzz");
}


int main(int argc, char **argv) {
    int n = 15;
    for  (int i = 1; i <= n; i++)
        std::cout << fizzbuzz(i) << std::endl;

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}