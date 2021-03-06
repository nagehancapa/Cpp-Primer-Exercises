// Chapter2_Exercise5.cpp

#include <iostream>

int main()
{
    // a)
    'a'; // character literal, type is char
    std::cout << 'a' << std::endl; // a
    L'a'; // wide character literal, w_char_t
    std::cout << L'a' << std::endl; // 97 (means ascii code of character 'a' in decimal)
    "a"; // character string literal
    std::cout << "a" << std::endl; // a
    L"a"; // wide character string literal
    std::cout << L"a" << std::endl; // address of string 'a' in hexadecimal
    std::cout << *L"a" << std::endl; // 97 means dereference address of string literal in decimal ascii code

    // b)
    10; // integral literal, type is int
    std::cout << 10 << std::endl; // 10
    10u; // unsigned integral literal, type is unsigned integral
    std::cout << 10u << std::endl; // 10
    10L; // integral literal, type is long int
    std::cout << 10L << std::endl; // 10
    10uL; // unsigned integral literal, type is unsigned long int
    std::cout << 10uL << std::endl; // 10
    012; // octal integral literal, type is int
    std::cout << 012 << std::endl; // 10
    0xC; // hexadecimal integral literal, type is int
    std::cout << 0xC << std::endl; // 12

    // c)
    3.14; // floating-point literal, type is double
    std::cout << 3.14 << std::endl; // 3.14
    3.14f; // floating-point literal, type is float
    std::cout << 3.14f << std::endl; // 3.14
    3.14L; // floating-point literal, type is long double
    std::cout << 3.14L << std::endl; // 3.14

    // d)
    10; // integral literal, type is int
    std::cout << 10 << std::endl; // 10
    10u; // unsigned integral literal, type is unsigned int
    std::cout << 10u << std::endl; // 10
    10.; // floating-point literal, type is double
    std::cout << 10. << std::endl; // 10
    10e-2; // floating-point literal, type is double
    std::cout << 10e-2 << std::endl; // 0.1

    return 0;
}