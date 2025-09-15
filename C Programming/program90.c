///////////////////////////////////////////////////////
//     
//  File name :     program90.c
//  Descreption :   Printing Pattern.
//  Author :        Prashant V. Surve
//  Date :          18/05/2025
//
///////////////////////////////////////////////////////

//Input : 4     3
/*Outout :
 
*   *   *
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

void Display(int iRow,int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("*\t");
            
        }
        printf("\n");
    }    

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    char cValue = '\0';

    printf(" Enter number of rows : ");
    scanf("%d",&iValue1);

    printf(" Enter number of columns : ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;

}

// Time compexity O(N).
// Where N >= 0 and N <= Infinity.
// where N is natural number.