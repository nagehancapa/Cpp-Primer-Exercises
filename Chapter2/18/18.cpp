// Chapter2_Exercise18.cpp

#include <iostream>

int main()
{
    int val1 = 42;
    int* ptr = &val1;
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;

    int val2 = 10;
    ptr = &val2;
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;

    *ptr = 56;
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;

    return 0;
}