///////////////////////////////////////////////////////
//     
//  File name :     program20.c
//  Descreption :   
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool CheckEven(int iNo)
{
    bool bResult = false;

    if((iNo % 2) == 0)
    {
        bResult = true;
    }
    else
    {
        bResult = false;
    }
    return bResult;
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
        printf("Given no is even .\n");
    }
    else
    {
        printf("Given no is Odd.\n");
    }  
    
    return 0;
    
}