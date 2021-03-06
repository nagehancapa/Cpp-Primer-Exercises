// CppPrimer-Chapter2-Exercse35

#include <iostream>

int main()
{
    const int i = 42; 
    auto j = i; // j is an int
    const auto& k = i; // k is a const reference to int
    auto* p = &i; // p is a pointer to int
    const auto j2 = i, & k2 = i; // j2 is a const int, k2 is a const reference to int 

    j = 5;
    p = &j;

    return 0;
}