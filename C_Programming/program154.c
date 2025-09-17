////////////////////////////////////////////////////////
//     
//  File name :     program154.c
//  Descreption :   Take input and print String.
//  Author :        Prashant V. Surve
//  Date :          24/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Display(char str[])
{
    printf("Your name is : %s\n",str);
}

int main()
{
    char Arr[50];

    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr); 

    Display(Arr);

    return 0;
}