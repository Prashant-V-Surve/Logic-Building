////////////////////////////////////////////////////////
//     
//  File name :     program159.c
//  Descreption :   Take input and Print string.
//  Author :        Prashant V. Surve
//  Date :          6/06/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter Your name : \n");
    scanf("%[^'\n']s",Arr);

    printf("Your name is : %s\n",Arr);

    return 0;
}