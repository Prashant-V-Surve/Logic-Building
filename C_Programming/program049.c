///////////////////////////////////////////////////////
//     
//  File name :     program41.c
//  Descreption :   
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////

// count even digits

#include<stdio.h>

int CountEvenDigit(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iCnt++;
        
        }
        iNo = iNo / 10;
        
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = CountEvenDigit(iValue);

    printf("The number of digits : %d\n", iRet);

    return 0;
}