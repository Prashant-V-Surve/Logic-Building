////////////////////////////////////////////////////////
//     
//  File name :     program163.c
//  Descreption :   Take input and Print string.
//  Author :        Prashant V. Surve
//  Date :          6/06/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Display(char str[])
{
    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);  //^ gives means not or negative until enter is given as command

    Display(Arr);

    return 0;
}