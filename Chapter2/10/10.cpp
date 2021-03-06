// Chapter2_Exercise10.cpp

#include <iostream>

std::string global_str; // empty string object
int global_int; // 0

int main()
{
    // int local_int; // undefined: error: C4700: uninitialized local variable used
    std::string local_str; // empty string object

    std::cout << global_str << std::endl;
    std::cout << global_int << std::endl;
    // std::cout << local_int << std::endl; // warning C6001 : using uninitialized memory local_int
    std::cout << local_str << std::endl;

    return 0;
}