////////////////////////////////////////////////////////
//     
//  File name :     program166.c
//  Descreption :   Take string input and find length.
//  Author :        Prashant V. Surve
//  Date :          6/06/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int StrlenX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        str++;
        iCount++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = StrlenX(Arr);

    printf("Number of Chracters : %d\n",iRet);

    return 0;
}