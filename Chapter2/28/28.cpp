// Chapter2-Exercise28.cpp

#include <iostream>

int main()
{
    // a)
    // int i, * const cp; // error E0257: const variable "cp" requires an initializer

    // b)
    // int* p1, * const p2; // error E0257: const variable "p2" requires an initializer

    // c)
    // const int ic, & r = ic; // error E0257: const variable "ic" requires an initializer 

    // d)
    // const int* const p3; // error E0257: const variable "p3" requires an initializer

    // e)
    const int* p;

    return 0;
}