////////////////////////////////////////////////////////
//     
//  File name :     program152.c
//  Descreption :   Take input and print String.
//  Author :        Prashant V. Surve
//  Date :          24/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    char Arr[50];

    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr); // square bracket is regular expression

    printf("Your name is : %s\n",Arr);

    return 0;
}