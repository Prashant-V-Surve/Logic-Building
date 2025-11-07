///////////////////////////////////////////////////////
//     
//  File name :     program11.c
//  Descreption :   Used to print repitative sentence
//  Author :        Prashant V. Surve
//  Date :          05/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

// Iteration 

void Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("Hello\n");
    }        
}

int main()
{
    Display();

    return 0;
}