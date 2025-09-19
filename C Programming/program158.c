////////////////////////////////////////////////////////
//     
//  File name :     program158.c
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
    scanf("%[^'\n']s",Arr);  //^ gives means not or negative until enter is given as command

    printf("Your name is : %s\n",Arr);

    return 0;
}