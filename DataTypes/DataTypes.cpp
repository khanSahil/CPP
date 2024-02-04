// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "DataType.h"

int main()
{
    double d1 = 2.3;
    int i1 = 3.1;
    // When defining a variable, you don’t actually need to state its type explicitly
    //  when it can be deduced from the initializer :

    auto b = true; // a bool
    auto ch = 'x'; // a char
    auto i = 123; // an int
    auto d = 1.2; // a double

    //C++ offers more specific operations for modifying a variable :

    i += 2;
    PRINT_INFO("The value of i is " + to_string(i));
    ++i;
    PRINT_INFO("The value of i is " + to_string(i));
    i -= 2;
    PRINT_INFO("The value of i is " + to_string(i));
    --i;
    PRINT_INFO("The value of i is " + to_string(i));
    i *= 2;
    PRINT_INFO("The value of i is " + to_string(i));
    i /= 2;
    PRINT_INFO("The value of i is " + to_string(i));
    i %= 2;
    PRINT_INFO("The value of i is " + to_string(i));


    PRINT_INFO("The value of d1 is " + to_string(d1));
    PRINT_INFO("The value of i1 is " + to_string(i1));
    PRINT_INFO("The value of b is " + to_string(b));
    PRINT_INFO("The value of ch is " + to_string(ch));
    PRINT_INFO("The value of d is " + to_string(d));



}