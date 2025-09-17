///////////////////////////////////////////////////////
//     
//  File name :     program35.c
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

    for(iCnt = 1; iCnt<=iNo/2; iCnt++)                  // here is the change we have reduce the time complexity by iNo/2
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

    printf("Factor of the number :");

    DisplayFactor(iValue);

    printf("\n");

    return 0;

}

