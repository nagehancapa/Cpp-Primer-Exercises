// CppPrimer-Chapter2-Exercise31

#include <iostream>

int main()
{
    int i = 0;
    int v2 = 0;
    int v1 = 5;
    int* p1 = &v1, & r1 = v1;
    const int* p2 = &v2, * const p3 = &i, & r2 = v2;

    r1 = v2; // legal, top-level const in v2 is ignored
    // p1 = p2; // error E0513 : a value of type "const int *" cannot be assigned to an entity of type "int *" (p2 low level const)
    p2 = p1;
    // p1 = p3; // error E0513: a value of type "const int *" cannot be assigned to an entity of type "int *"
    p2 = p3; 

    return 0;
}