///////////////////////////////////////////////////////
//     
//  File name :     program23.c
//  Descreption :   
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////

// Check whether the no is divisible by 3 and 5

#include <stdio.h>
#include <stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 3)==0 && (iNo % 5)==0)
    {
        return true;
    }
    else
    {
        return false;

    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number to check it is even or odd:\n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("Divisible by 3 & 5.\n");
    }
    else
    {
        printf("Not Divisible by 3 & 5.\n");
    }  
    
    return 0;

}