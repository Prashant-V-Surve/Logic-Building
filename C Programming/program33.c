///////////////////////////////////////////////////////
//     
//  File name :     program33.c
//  Descreption :   
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////

// Take one number from user and print factor of that number  

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 1;
    
    printf("Factor of given no are : ");
    
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

    DisplayFactor(iValue);

    printf("\n");
    return 0;

}