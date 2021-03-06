// Chapter2_Exercise11.cpp

#include <iostream>

extern int ix = 1024; // definition
int iy; // declaration: declares and defines iy
extern int iz; // declaration

int main()
{
    // Error E2442: an initializer is not allowed on a local declaration of an extern variable
    // It is an error to provide an initializer on an extern inside a function.

    int iy2; // declaration: declares and defines iy
    extern int iz2; // declaration

    return 0;
}