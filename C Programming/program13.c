///////////////////////////////////////////////////////
//     
//  File name :     program13.c
//  Descreption :   Used to print repitative sentence
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

// Iteration 

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\n",iNo);
    }        
}

int main()
{
    int iValue = 0;

    printf("Enter the value : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

