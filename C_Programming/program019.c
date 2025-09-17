///////////////////////////////////////////////////////
//     
//  File name :     program19.c
//  Descreption :   
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
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
        printf("Given number is Even\n");
    }
    else
    {
        printf("Given no is Odd\n");
    }
    return 0;

}