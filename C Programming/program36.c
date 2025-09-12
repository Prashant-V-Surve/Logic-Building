///////////////////////////////////////////////////////
//     
//  File name :     program36.c
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

    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)                           
        {
            printf("Factor is : %d\n", iCnt);                            //here is the change as we are printing both the factors and non factors.
        }
        else
        {
            printf("Non factor is : %d\n", iCnt);
        }
    }    

}


int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;

}