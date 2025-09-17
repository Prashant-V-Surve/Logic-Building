///////////////////////////////////////////////////////
//     
//  File name :     program122.java
//  Descreption :   Print elements in Array.
//  Author :        Prashant V. Surve
//  Date :          23/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Display(int ptr[], int iSize)
{
    int iCnt = 0;
    printf("Elements of the array are:\n");

    for(iCnt= 0; iCnt <= iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
}

int main()
{
    int Arr[5];
    int iCnt = 0;

    printf("Enter the element: \n");
    
    for(iCnt = 0; iCnt < 5    ; iCnt++)
    {
        scanf("%d\n",&Arr[iCnt]);
    }

    Display(Arr,5);// Display(100,5);

    return 0;
}