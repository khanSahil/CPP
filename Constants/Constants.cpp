// Constants.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Constants.h"

int main()
{
    // C++ supports two notions of immutability const and constexp
    /*
    • const: meaning roughly ‘‘I promise not to change this value’’ (§7.5). This is used primarily
    to specify interfaces, so that data can be passed to functions without fear of it being modified.
    The compiler enforces the promise made by const.
    • constexpr: meaning roughly ‘‘to be evaluated at compile time’’ (§10.4). This is used primarily
    to specify constants, to allow placement of data in memory where it is unlikely to be corrupted,
    and for performance.
    */

    const int fI1 = 18;
    const double fD1 = 17.4;

    constexpr int fI2 = 2 * fI1;
    constexpr double fD2 = 2.2 * fD1;

    PRINT_INFO("The value of fI2 is " + to_string(fI2));
    PRINT_INFO("The value of fD2 is " + to_string(fD2));
    return 0;
}