#include "gtest/gtest.h"

namespace {

TEST(factorial, negative) {
    bool is_error = false;
    try {
      factorial(-10);
    } catch (const std::runtime_error& rt) {
      is_error = true;
    }
    EXPECT_TRUE(is_error);
}

TEST(factorial, zero) {
    EXPECT_EQ(1, factorial(0));
}

TEST(factorial, positive) {
    EXPECT_EQ(1, factorial(1));
    EXPECT_EQ(2, factorial(2));
    EXPECT_EQ(24, factorial(4));
    EXPECT_EQ(3628800, factorial(10));
}
}

int main(int argc, char **argv) {
   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}

