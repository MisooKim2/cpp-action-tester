#include <gtest/gtest.h>
#include "main.cpp"

// Test case for concatenate function
TEST(ConcatenateTest, HandlesNonEmptyStrings) {
    EXPECT_EQ(concatenate("Hello", " World"), "Hello World");
    EXPECT_EQ(concatenate("GitHub", " Actions"), "GitHub Actions");
}

TEST(ConcatenateTest, HandlesEmptyStrings) {
    EXPECT_EQ(concatenate("", "Test"), "Test");
    EXPECT_EQ(concatenate("Test", ""), "Test");
}
