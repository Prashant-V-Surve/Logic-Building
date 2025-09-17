///////////////////////////////////////////////////////
//     
//  File name :     program118.java
//  Descreption :   Print elements in Array.
//  Author :        Prashant V. Surve
//  Date :          23/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    int Arr[5];
    int iCnt = 0;

    printf("Enter the element: \n");
    
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d\n",&Arr[iCnt]);
    }

    printf("Elements for the array are : \n");
    
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}