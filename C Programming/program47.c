///////////////////////////////////////////////////////
//     
//  File name :     program41.c
//  Descreption :   
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////

// count digits

#include<stdio.h>   

int CountDigit(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iCnt++;

        //printf("The number of digits : %d\n", iCnt);
    }
    printf("The number of digits : %d\n", iCnt);
    //return 0;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = CountDigit(iValue);

    //printf("The number of digits : %d\n", iRet);

    return 0;
}