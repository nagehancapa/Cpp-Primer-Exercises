// Chapter2-Example24.cpp

#include <iostream>

int main()
{
    int i = 42;

    void* p = &i; // p can hold a pointer of any type

    // long* lp = &i; // error E0144: a value of type "int *" cannot be used to initialize an entity of type "long *"

    std::cout << *(int*)(p) << std::endl;

    return 0;
}