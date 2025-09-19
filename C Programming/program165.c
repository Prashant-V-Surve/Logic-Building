////////////////////////////////////////////////////////
//     
//  File name :     program165.c
//  Descreption :   Take input and Print string.
//  Author :        Prashant V. Surve
//  Date :          6/06/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Display(char str[])
{
    int i = 0;

    for(i = 0 ; str[i] != '\0'; i++)
    {
        printf("%c\n",str[i]);
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