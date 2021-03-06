// Chapter2_Exercise15.cpp

#include <iostream>

int main()
{
    int ival = 1.01; // valid but loss of data

    // int& rval1 = 1.01; // invalid: initializer must be an object

    int& rval2 = ival; // valid

    // int& rval3; // invalid: reference must be initialized

    return 0;
}