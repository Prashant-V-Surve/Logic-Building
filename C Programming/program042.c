///////////////////////////////////////////////////////
//     
//  File name :     program42.c
//  Descreption :   Check Prime Number.
//  Author :        Prashant V. Surve
//  Date :          12/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime number\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }
    return 0;
}