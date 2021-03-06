// Chapter2-Exercise25.cpp

#include <iostream>

int main()
{
    {
        int* ip, i, & r = i;
        // ip is a pointer to int 
        // i is an int
        // r is a reference to int i
    }

    {
        int i, * ip = 0;
        // i is an int
        // ip is a null pointer
    }

    {
        int* ip, ip2;
        // ip is a pointer to int
        // ip2 is an int
    }

    return 0;
}