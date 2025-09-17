/////////////////////////////////////////////////////////
//     
//  File name :     program145.c
//  Descreption :   Take input and print ASCII value
//  Author :        Prashant V. Surve
//  Date :          24/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter Character :\n");
    scanf("%c",&ch);

    printf("ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}