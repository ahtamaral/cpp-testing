#include <gtest/gtest.h>
#include "../Calculator/src/arithmetics/operations.h"
#include <random>
#include <limits>

TEST(IntSumTest, SumCorrectly) 
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(std::numeric_limits<int>::min(), std::numeric_limits<int>::max());

    for (int i = 0; i < 10; ++i) {
        // Generate random integers a and b
        int a = dist(gen);
        int b = dist(gen);
        ASSERT_EQ(a+b, sum(a,b));
    }
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
