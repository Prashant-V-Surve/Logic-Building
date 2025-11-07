///////////////////////////////////////////////////////
//     
//  File name :     program18.c
//  Descreption :   Used to calculate sum of n no.
//  Author :        Prashant V. Surve
//  Date :          05/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

// Iteration 

int Calculate(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }        
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    iRet = Calculate(iValue);
    printf("Sumation is %d\n",iRet);
    
    return 0;
}