// Chapter2_Exercise9.cpp

#include <iostream>

int main()
{
    // a)
    // std::cin >> int input_value; // error C2062: type 'int' unexpected
    int input_value;
    std::cin >> input_value;

    // b)
    // int i = { 3.14 }; // error C2397: conversion from 'double' to 'int' requires a narrowing conversion
    int i = { 3 };
    std::cout << i << std::endl;

    // c)
    // double salary = wage = 9999.99; // error E0020: identifier "wage" is undefined
    double wage = 9999.99;
    double salary = wage;
    std::cout << salary << std::endl;

    // d)
    int c = 3.14; // warning C4244: 'initializing': conversion from 'double' to 'int', possible loss of data
    std::cout << c << std::endl;

    return 0;
}