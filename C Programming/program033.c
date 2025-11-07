///////////////////////////////////////////////////////
//     
//  File name :     program33.c
//  Descreption :   Display factors of given number.
//  Author :        Prashant V. Surve
//  Date :          11/05/2025
//
///////////////////////////////////////////////////////

// Take one number from user and print factor of that number  

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}