// CppPrimer-Chapter2-Exercise38

#include <iostream>

int main()
{
    int i = 3;
    auto a = i; // a is an int
    decltype(i) b = i; // b is an int

    int x = 2, & y = x;
    auto n = y; // n is an int
    decltype(y) m = x; // m is an int&

    const int p = 5;
    auto q = p; // q is an int
    decltype(p) z = p; // z is a const int

    return 0;
}