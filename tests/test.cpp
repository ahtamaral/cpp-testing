#include <random>
#include <limits>
#include <cfloat>
#include <typeinfo>

#include <gtest/gtest.h>

#include "../Calculator/src/calculator/arithmetics.h"

template <typename T>
struct inputPair
{
    T a;
    T b;
};

template <typename T>
std::vector<inputPair<T>> generateInputs(int inputLength, T type)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(std::numeric_limits<int>::min(), std::numeric_limits<int>::max());

    inputPair<T> ip;
    std::vector<inputPair<T>> v;

    for (int i = 0; i < inputLength; ++i) {
        // Generate random integers a.
        ip.a = dist(gen);
        ip.b = dist(gen);

        v.push_back(ip);
    }

    return v;
}

TEST(ArithmeticsTest, SumCorrectly)
{

    int inputLength = 1000;

    int a = 1;
    float b = 1.0;
    double c = 1.0;

    std::vector<inputPair<int>> ints = generateInputs(inputLength, a);
    std::vector<inputPair<float>> floats = generateInputs(inputLength, b);
    std::vector<inputPair<double>> doubles = generateInputs(inputLength, c);

    for (unsigned i = 0; i < inputLength; i++)
    {
        ASSERT_EQ(ints[i].a + ints[i].b, Arithmetics::sum(ints[i].a, ints[i].b));
        ASSERT_EQ(floats[i].a + floats[i].b, Arithmetics::sum(floats[i].a, floats[i].b));
        ASSERT_EQ(doubles[i].a + doubles[i].b, Arithmetics::sum(doubles[i].a, doubles[i].b));
    }
}

TEST(ArithmeticsTest, SubtractCorrectly)
{

    int inputLength = 1000;
    
    int a = 1;
    float b = 1.0;
    double c = 1.0;

    std::vector<inputPair<int>> ints = generateInputs(inputLength, a);
    std::vector<inputPair<float>> floats = generateInputs(inputLength, b);
    std::vector<inputPair<double>> doubles = generateInputs(inputLength, c);

    for (unsigned i = 0; i < inputLength; i++)
    {
        ASSERT_EQ(ints[i].a - ints[i].b, Arithmetics::subtract(ints[i].a, ints[i].b));
        ASSERT_EQ(floats[i].a - floats[i].b, Arithmetics::subtract(floats[i].a, floats[i].b));
        ASSERT_EQ(doubles[i].a - doubles[i].b, Arithmetics::subtract(doubles[i].a, doubles[i].b));
    }
}

TEST(ArithmeticsTest, MultiplyCorrectly)
{
    int inputLength = 1000;
    
    int a = 1;
    float b = 1.0;
    double c = 1.0;

    std::vector<inputPair<int>> ints = generateInputs(inputLength, a);
    std::vector<inputPair<float>> floats = generateInputs(inputLength, b);
    std::vector<inputPair<double>> doubles = generateInputs(inputLength, c);

    for (unsigned i = 0; i < inputLength; i++)
    {
        ASSERT_EQ(ints[i].a * ints[i].b, Arithmetics::multiply(ints[i].a, ints[i].b));
        ASSERT_EQ(floats[i].a * floats[i].b, Arithmetics::multiply(floats[i].a, floats[i].b));
        ASSERT_EQ(doubles[i].a * doubles[i].b, Arithmetics::multiply(doubles[i].a, doubles[i].b));
    }
}

TEST(ArithmeticsTest, DivideCorrectly)
{
    int inputLength = 1000;
    
    int a = 1;
    float b = 1.0;
    double c = 1.0;

    std::vector<inputPair<int>> ints = generateInputs(inputLength, a);
    std::vector<inputPair<float>> floats = generateInputs(inputLength, b);
    std::vector<inputPair<double>> doubles = generateInputs(inputLength, c);

    for (unsigned i = 0; i < inputLength; i++)
    {
        ASSERT_EQ(ints[i].a / ints[i].b, Arithmetics::divide(ints[i].a, ints[i].b));
        ASSERT_EQ(floats[i].a / floats[i].b, Arithmetics::divide(floats[i].a, floats[i].b));
        ASSERT_EQ(doubles[i].a / doubles[i].b, Arithmetics::divide(doubles[i].a, doubles[i].b));
    }
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
