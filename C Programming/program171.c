////////////////////////////////////////////////////////
//     
//  File name :     program171.c
//  Descreption :   Take string input & Count Small.
//  Author :        Prashant V. Surve
//  Date :          6/06/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int CountSmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf("Number of Chracters : %d\n",iRet);

    return 0;
}