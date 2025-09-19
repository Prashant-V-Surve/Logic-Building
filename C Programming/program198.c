//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program198.c
//  Descreption :   Reversing the given string.
//  Author :        Prashant V. Surve
//  Date :          7/06/2025
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void ReverseDisplay(char *str)
{
    char *start = NULL;

    start = str;

    while(*str != '\0')
    {
        str++;
    }
    str--;

    while(str >= start)
    {
        printf("%c",*str);
        str--;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);       

    ReverseDisplay(Arr);

    printf("\n");

    return 0;
}

