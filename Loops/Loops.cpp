// Loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "loops.h"

bool acceptUserInput()
{
    int retryCount = 1;
    while (retryCount <= 3)
    {
        PRINT_INFO("Do you want to proceeed (y or n)?");
        char answer;
        cin >> answer;

        switch (answer)
        {
            case 'y':
                return true;
            case 'n':
                return false;
            default:
                PRINT_INFO("Sorry I don't understand the inpyt");
                retryCount++;
        }
    }
    PRINT_INFO("I will take that as No");
    return false;
}

int main()
{
    if (acceptUserInput() == true)
        PRINT_INFO("User Added Yes");
    else
        PRINT_INFO("User Added No");
    return 0;
}