// PrintSquare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "PrintSquare.h"

double squareValue(double value)
{
    return value * value;
}

void printSquare(double value)
{
    PRINT_INFO("The square of" + to_string(value) << " is " << to_string(squareValue(value)));
}


int main()
{
    printSquare(2.0);
}