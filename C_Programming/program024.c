///////////////////////////////////////////////////////
//     
//  File name :     program24.c
//  Descreption :   
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////

// accept a number and give the sum of all th e natural numbers upto that number.

#include <stdio.h>

int Summation(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt=1 ; iCnt<=iNo ;iCnt++)
    {
        iSum = iSum + iCnt;

    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d", &iValue);

    iRet = Summation(iValue);

    printf("summation is : %d\n",iRet);

    return 0;

}