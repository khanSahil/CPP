// UserInput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "UserInput.h"

void acceptUserInput()
{
    cout << "Do you want to proceed (y or n)?\n";
    char answer = 0;
    cin >> answer;
    if (answer == 'y') {
        PRINT_INFO("User provided Yes");
    }
    else {
        PRINT_INFO("User provided No");
    } 
}

int main()
{
    acceptUserInput();
}