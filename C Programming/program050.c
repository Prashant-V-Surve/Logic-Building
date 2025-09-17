///////////////////////////////////////////////////////
//     
//  File name :     program41.c
//  Descreption :   Counting sum of digits.
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////

// sum of digits

#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        iSum = iSum + iDigit;
        
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("The number of digits : %d\n", iRet);

    return 0;
}