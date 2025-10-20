//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program402.c
//  Descreption :   Recursion.                  
//  Author :        Prashant V. Surve
//  Date :          14/07/2025
//
//////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Factorial(int iNo)
{
    int i = 1;
    int iSum = 1;

    while(i <= iNo)
    {
        iSum = iSum * i;
        i++;
    }

    return iSum;
}

int main()
{
    int iRet = 0;
    int iValue = 6;

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n",iRet);

    return 0;
}