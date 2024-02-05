// PointersArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "PointersArray.h"

int* copyFunction(int *v2)
{
    int v1[10] = { 0,1,2,3,4,9,8,7,6,5 };
    
    for (int index = 0; index < 10; index++)
        v2[index] = v1[index];
    
    for (int index = 0; index < 10; index++)
        PRINT_INFO("The value is: " + to_string(v2[index]));

    return v2;
}

void printPointer()
{

}

int main()
{
    int* pV;
    int v2[10];
    pV = copyFunction(v2);
    pV = v2;
    for (int index = 0; index < 10; index++)
        PRINT_INFO("The *pV is: " + to_string(pV[index]));
}