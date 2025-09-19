////////////////////////////////////////////////////////
//     
//  File name :     program172.c
//  Descreption :   Count Small & Capital characters.
//  Author :        Prashant V. Surve
//  Date :          6/06/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int CountCapitalSmall(char *str)  
{
    int iCountSmall = 0, iCountCap = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        else if(*str >= 'A' && *str <= 'z')
        {
            iCountCap++;
        }
        str++;
    }

    printf("Number of Small characters : %d\n",iCountSmall);
    printf("Number of Capital characters : %d\n",iCountCap);
    
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapitalSmall(Arr);

    return 0;
}