////////////////////////////////////////////////////////
//     
//  File name :     program174.c
//  Descreption :   Count Small, Capital & Digit.
//  Author :        Prashant V. Surve
//  Date :          6/06/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int CountCapitalSmallDigit(char *str)
{
    int iCountSmall = 0, iCountCap = 0, iCountDigit = 0;

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
        else if(*str >= '0' && *str <= '9')
        {
            iCountDigit++;
        }
        str++;
    }
 
    printf("Number of Small characters : %d\n",iCountSmall);
    printf("Number of Capital characters : %d\n",iCountCap);
    printf("Number of Digit characters : %d\n",iCountDigit);
    
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapitalSmallDigit(Arr);

    return 0;
}