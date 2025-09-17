///////////////////////////////////////////////////////
//     
//  File name :     program116.c
//  Descreption :   Print elements in Array.
//  Author :        Prashant V. Surve
//  Date :          23/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    int Arr[] = { 10, 20, 30, 40, 50};
    int iCnt = 0;

    for(iCnt = 0; iCnt <= 4; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }

    return 0;
}