// CppPrimer-Chapter2-Exercise37
// Assignment is an example of an  expression that yields a reference type. 
// The type is a reference to the type of the left hand operand.
// That is, if i is an int, then the type of the expressioni = x is int&.

#include <iostream>

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a; // c is an int
    decltype(a = b) d = a; // d is an int&

    std::cout << "c: " << c << std::endl;
    c = 42;
    std::cout << "c: " << c << std::endl;

    std::cout << "a: " << a << std::endl;
    d = 56;
    std::cout << "a: " << a << std::endl;

    return 0;
}
