////////////////////////////////////////////////////////
//     
//  File name :     program190.c
//  Descreption :   Count character in string.
//  Author :        Prashant V. Surve
//  Date :          7/06/2025
//
////////////////////////////////////////////////////////

// deRm2dfr
// case insensitive

// char : R
// output 2 = correct

// input : Demo@23@
// char : @
//output : 0

#include <stdio.h>

int CharFrequency(char *str, char ch) 
{
    int  iCount = 0;
    while(*str != '\0')
    {
        if((*str >= 'A' && *str <= 'Z'))     // Ca[ital]
        {
            if(*str == ch || ch == ch + 32)
            {
                iCount++;
            }
        }
        else if((*str >= 'a' && *str <= 'z'))// Small
        {
            if(*str == ch || ch == ch - 32)
            {
                iCount++;
            }
        }    
        else                             // other(special symbols / digits)
        {
            if(*str == ch || (*str == ch + 0))
            {
                iCount++;
            }
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iValue = 0;
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character : \n");
    scanf(" %c",&cValue);         

    iRet = CharFrequency(iValue);

    printf("%c characters Occurs %d times", cValue, iRet);
    return 0;
}