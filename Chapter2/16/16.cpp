// Chapter2_Exercise16.cpp

#include <iostream>

int main()
{
    int i = 0, & r1 = i;
    double d = 0, & r2 = d;

    r2 = 3.14159;
    std::cout << d << std::endl;

    r2 = r1;
    std::cout << d << std::endl;

    i = r2;
    std::cout << i << std::endl;

    r1 = d;
    std::cout << r1 << std::endl;

    return 0;
}