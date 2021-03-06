// CppPrimer-Chapter2-Exercise-34.cpp

#include <iostream>

int main()
{
    int i = 0, & r = i;
    auto a = r; // a is an int

    const int ci = i, & cr = ci;
    auto b = ci; // b is an int (top level const in ci is dropped)
    auto c = cr; // c is an int (cr is an alias for ci whose const is top level)
    auto d = &i; // d is an int*
    auto e = &ci; // e is const int* (& of aa const object is low level const)
    auto& g = ci; // g is a const int& that is bound to ci

    std::cout << "a before assignment: (0) " << a << std::endl;
    a = 42;
    std::cout << "a after assignment: (42) " << a << std::endl;

    std::cout << "b before assignment: (0) " << b << std::endl;
    b = 42;
    std::cout << "b after assignment: (42) " << b << std::endl;
    
    std::cout << "c before assignment: (0) " << c << std::endl;
    c = 42;
    std::cout << "c after assignment: (42) " << c << std::endl;

    // d = 42; // error E0513: a value of type "int" cannot be assigned to an entity of type "int*"
    // e = 42; // error E0513: a value of type "int" cannot be assigned to an entity of type "const int*" 
    // g = 42; // error E0137: expression must be a modifiable lvalue

    return 0;
}