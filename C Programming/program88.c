///////////////////////////////////////////////////////
//     
//  File name :     program88.c
//  Descreption :   Printing Pattern.
//  Author :        Prashant V. Surve
//  Date :          18/05/2025
//
///////////////////////////////////////////////////////

/*Outout :

*   *   *
*   *   *
*   *   *

/*
    start
        Accept the frequency
        Iterate from one to that frequency
            display * on screen
        continue
    stop    
*/

#include <stdio.h>

void Display()
{
    int j = 0;

    for(j = 1; j <= 3; j++)
    {
        printf("*\t");
    }
    printf("\n");
    
    for(j = 1; j <= 3; j++)
    {
        printf("*\t");
    }
    printf("\n");

    for(j = 1; j <= 3; j++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    Display();

    return 0;
}

// Time compexity O(N).
// Where N >= 0 and N <= Infinity.
// where N is natural number.