///////////////////////////////////////////////////////
//     
//  File name :     program75.c
//  Descreption :   Printing Pattern.
//  Author :        Prashant V. Surve
//  Date :          18/05/2025
//
///////////////////////////////////////////////////////

//Input : 4
//Outout :  $   $   $   $

/*
    start
        Accept the frequency
        Iterate from one to that frequency
            display * on screen
        continue
    stop    
*/

#include <stdio.h>

void Display(int iNo)
{      
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        printf("$\t");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf(" Enter frequency : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}

// Time compexity O(N).
// Where N >= 0 and N <= Infinity.
// where N is natural number.