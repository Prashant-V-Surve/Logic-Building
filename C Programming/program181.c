////////////////////////////////////////////////////////
//     
//  File name :     program181.c
//  Descreption :   Change to Small.
//  Author :        Prashant V. Surve
//  Date :          6/06/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void StruprX(char *str) 
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str -= 32;                         // function strupr;
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    StruprX(Arr);

    printf("Updated string : %s\n",Arr);

    return 0;
}