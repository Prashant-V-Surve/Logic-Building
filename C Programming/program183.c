////////////////////////////////////////////////////////
//     
//  File name :     program183.c
//  Descreption :   Take input and print string.
//  Author :        Prashant V. Surve
//  Date :          7/06/2025
//
////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    //Problem due to buffer clean up
    printf("Enter the Character : \n");
    scanf("%c",&cValue);

    return 0;
}