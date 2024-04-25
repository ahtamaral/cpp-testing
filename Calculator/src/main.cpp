#include <iostream>
#include "calculator/arithmetics.h"

int main(int argc, char const *argv[])
{
    int a = 19192, b = 12101;

    Arithmetics::sum(a, b);
    Arithmetics::subtract(a, b);
    Arithmetics::multiply(a, b);
    Arithmetics::divide(a,b);

    return 0;
}
