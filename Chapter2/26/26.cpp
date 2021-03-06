// Chapter2-Exercise26.cpp

#include <iostream>

int main()
{
    // const int buf; // error: E0257: const variable "buf" requires an initializer

    int cnt = 0;

    const int sz = cnt;

    ++cnt;

    // ++sz; // error: E0137: expression must be a modifiable lvalue

    return 0;
}