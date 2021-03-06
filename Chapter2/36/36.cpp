// CppPrimer-Chapter2-Exercise36

#include <iostream>

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a; // c is an int
    decltype((b)) d = a; // d is an int&

    std::cout << "c: " << c << std::endl;
    ++c; // c = 4
    std::cout << "c: " << c << std::endl;

    std::cout << "d: " << d << std::endl;
    ++d; //d = 4
    std::cout << "d: " << d << std::endl;

    return 0;
}