// Chapter2_Exercise14.cpp

#include <iostream>

int main()
{
    int i = 100;
    int sum = 0;

    for (int i = 0; i != 10; ++i)
        sum += i;

    std::cout << i << " " << sum << std::endl;
}