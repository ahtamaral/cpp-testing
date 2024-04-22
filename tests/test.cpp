#include <gtest/gtest.h>
#include "../Calculator/src/arithmetics/operations.h"
#include <random>
#include <limits>
#include <cfloat>

TEST(SumTest, IntSumCorrectly) 
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(std::numeric_limits<int>::min(), std::numeric_limits<int>::max());

    for (int i = 0; i < 1000; ++i) {
        // Generate random integers a and b
        int a = dist(gen);
        int b = dist(gen);
        ASSERT_EQ(a+b, sum(a,b));
    }
}

TEST(SumTest, FloatSumCorrectly) 
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<float> dist(FLT_MIN, FLT_MAX);

    for (int i = 0; i < 1000; ++i) {
        // Generate random integers a and b
        float a = dist(gen);
        float b = dist(gen);
        ASSERT_EQ(a+b, sum(a,b));
    }
}

TEST(SumTest, DoubleSumCorrectly) 
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dist(DBL_MIN, DBL_MAX);

    for (int i = 0; i < 1000; ++i) {
        // Generate random integers a and b
        float a = dist(gen);
        float b = dist(gen);
        ASSERT_EQ(a+b, sum(a,b));
    }
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
