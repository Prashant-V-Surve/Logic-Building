////////////////////////////////////////////////////////
//     
//  File name :     program155.c
//  Descreption :   Take string input and print 
//                  character.
//  Author :        Prashant V. Surve
//  Date :          24/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Display(char *str)
{
    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }
}

int main()
{
    char Arr[50];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr); /

    Display(Arr);

    return 0;
}