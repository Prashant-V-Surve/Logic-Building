///////////////////////////////////////////////////////
//     
//  File name :     program22.c
//  Descreption :   
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////

// check divisble by 5 

#include <stdio.h>
#include <stdbool.h>

bool CheckEven(int iNo)
{
    return ((iNo % 5)==0);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number to check whether it divisible by 5 or not:\n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5.\n");
    }
    else
    {
        printf("Not Divisible by 5.\n");
    }  
    
    return 0;




}