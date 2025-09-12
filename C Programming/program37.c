///////////////////////////////////////////////////////
//     
//  File name :     program37.c
//  Descreption :   
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////

// Take one number from user and print even factor of that number.

#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;

    if (iNo<0)    //updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("Even Factor is : %d\n", iCnt);
        }
        
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;

}