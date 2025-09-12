///////////////////////////////////////////////////////
//     
//  File name :     program34.c
//  Descreption :   
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////

// Take one number from user and print factor of that number. 

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if (iNo<0)    //updater
    {
        iNo = -iNo;
    }           

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d ", iCnt);
        }
    }    

}


int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    printf("Factors of the number are :");

    DisplayFactor(iValue);
    printf("\n");

    return 0;

}