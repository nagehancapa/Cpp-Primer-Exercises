// Chapter2_Exercise7.cpp

#include <iostream>

int main()
{
    "Who goes with F\145rgus?\012"; // const char[23] "Who goes with Fergus?\n"
    std::cout << "Who goes with F\145rgus?\012";

    3.14e1L; // long double "31.4"
    std::cout << 3.14e1L << std::endl;

    3.14L; // long double "3.14"                                                                                                 
    std::cout << 3.14L << std::endl;

    return 0;
}