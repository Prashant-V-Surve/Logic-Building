//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program197.c
//  Descreption :   Reversing the given string.
//  Author :        Prashant V. Surve
//  Date :          7/06/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void ReverseDisplay(char *str)
{
    int iCount = 0, iCnt = 0;
    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    
    str--;

    iCnt = iCount;
    while(iCnt != 0)           // while( iCnt > 0)
    {
        printf("%c",*str);
        iCnt--;
        *str--; 
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