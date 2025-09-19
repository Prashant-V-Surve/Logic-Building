
////////////////////////////////////////////////////////
//     
//  File name :     program177.c
//  Descreption :   Change to Capital character.
//  Author :        Prashant V. Surve
//  Date :          6/06/2025
//
///////////////////////////////////////////////////////

// Input : India
// Output : IndiA

#include <stdio.h>

void Change(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a')
        {
            *str = 'A';
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

    Change(Arr);

    printf("Updated string : %s\n",Arr);

    return 0;
}