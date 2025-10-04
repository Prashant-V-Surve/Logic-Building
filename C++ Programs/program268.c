////////////////////////////////////////////////////////
//     
//  File name :     program268.c
//  Descreption :   Display number in different formats.
//  Author :        Prashant V. Surve
//  Date :          15/06/2025
//
////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    printf("Number in Decimal Format : %d\n",iValue);
    printf("Number in Octal Format : %o\n",iValue);
    printf("Number in HexaDecimal Format : %x\n",iValue);
    
    return 0;
}