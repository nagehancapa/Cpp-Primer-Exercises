// Chapter2-Exercise29.cpp

#include <iostream>

int main()
{
    int i, * const cp = &i;
    int* p1 = &i;
    int* const p2 = p1;
    const int ic = 5, & r = ic;
    const int* const p3 = &ic;
    const int* p = &ic;

    i = ic;

    // p1 = p3; // error E0513: a value of type "const int *" cannot be assigned to an entity of type "int *"

    // p1 = &ic; // error E0513: a value of type "const int *" cannot be assigned to an entity of type "int *"

    // p3 = &ic; // error E0137: expression must be a modifiable lvalue

    // p2 = p1; // error E0137: expression must be a modifiable lvalue

    // ic = *p3;  // error E0137: expression must be a modifiable lvalue

    return 0;
}