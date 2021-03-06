// Chapter2_Exercise21.cpp

#include <iostream>

int main()
{
    int i = 0;

    // double* dp = &i; // error E0144: a value of type int* cannot be used to initialize an entity of type double*

    // int* ip = i; // error E0144: a value of type int cannot be used to initialize an entity of type int*

    int* p = &i; // legal

    return 0;
}