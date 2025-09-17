///////////////////////////////////////////////////////
//     
//  File name :     program117.java
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
    
    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);

    printf("Elements for the array are : \n");
    for(iCnt = 0; iCnt <= 4; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}