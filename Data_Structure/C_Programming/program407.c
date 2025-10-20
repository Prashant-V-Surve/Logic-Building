//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program407.c
//  Descreption :   Recursion.                  
//  Author :        Prashant V. Surve
//  Date :          14/07/2025
//
//////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Factorial(int iNo)
{
    static int iSum = 1;

    if(iNo > 1)
    {
        iSum = iSum * iNo;
        Factorial(iNo-1);
    }

    return iSum;
}

int main()
{
    int iRet = 0;
    int iValue = 4;

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n",iRet);

    return 0;
}