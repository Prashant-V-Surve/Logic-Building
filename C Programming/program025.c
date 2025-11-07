/////////////////////////////////////////////////////////////////
//     
//  File name :     program25.c
//  Descreption :   Summation of number upto given number.
//  Author :        Prashant V. Surve
//  Date :          11/05/2025
//
/////////////////////////////////////////////////////////////////

//Take input from user and provide the factorial of that no.

#include<stdio.h>

// Input : 5
// 1 + 2 + 3 + 4 + 5

int Summation(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    
    printf("Summation is : %d\n",iRet);

    return 0;
}