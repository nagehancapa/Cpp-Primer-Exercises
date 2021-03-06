// Chapter2_Exercise22.cpp

#include <iostream>

int main()
{
    int val = 1;
    int* ptr = &val;

    if (ptr)
        std::cout << "if(ptr): means if the pointer ptr is not null" << std::endl;

    if (*ptr)
        std::cout << "if(*ptr): means the object pointed by pointer is not false (the object is not null or zero)" << std::endl;

    return 0;
}