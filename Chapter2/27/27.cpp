// Chapter2-Exercise27.cpp

#include <iostream>

int main()
{
    // a)
    // int i = -1, & r = 0; // error: E0461: initial value of reference to non - const must be an object

    // b)
    int i2;
    int* const p2 = &i2;

    // c)
    const int i = -1, & r = 0;

    // d)
    const int* const p3 = &i2;

    // e)
    const int* p1 = &i2;

    // f)
    // const int& const r2; // error E0252: reference variable "r2" requires an initializer

    // g)
    int i3 = -1;
    const int i4 = i3, & r4 = i3;

    return 0;
}