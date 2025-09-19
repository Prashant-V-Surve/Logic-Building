////////////////////////////////////////////////////////
//     
//  File name :     program179.c
//  Descreption :   Change to Small.
//  Author :        Prashant V. Surve
//  Date :          6/06/2025
//
///////////////////////////////////////////////////////

//input : InDiA
// Output : india 

#include <stdio.h>

void StrlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str += 32;                       // function strlwr;
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

    StrlwrX(Arr);

    printf("Updated string : %s\n",Arr);

    return 0;
}