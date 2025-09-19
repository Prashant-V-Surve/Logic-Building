////////////////////////////////////////////////////////
//     
//  File name :     program176.c
//  Descreption :   Count Character 'a'. 
//  Author :        Prashant V. Surve
//  Date :          6/06/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int Count(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'a')
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

    iRet = Count(Arr);

    printf("Number of a charcters are : %d\n",iRet);

    return 0;
}