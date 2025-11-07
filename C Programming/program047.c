///////////////////////////////////////////////////////
//     
//  File name :     program47.c
//  Descreption :   Count Digits.
//  Author :        Prashant V. Surve
//  Date :          12/05/2025
//
///////////////////////////////////////////////////////

// count digits

#include<stdio.h>   

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}