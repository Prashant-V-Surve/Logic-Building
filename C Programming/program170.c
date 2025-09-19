////////////////////////////////////////////////////////
//     
//  File name :     program170.c
//  Descreption :   Take string input & Count Capital.
//  Author :        Prashant V. Surve
//  Date :          6/06/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int CountCapital(char *str) 
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 65 && *str <= 90))
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

    iRet = CountCapital(Arr);

    printf("Number of Capital Chracters : %d\n",iRet);

    return 0;
}