//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program195.c
//  Descreption :   Check whether character in present in string.
//                  (case sensitive)
//  Author :        Prashant V. Surve
//  Date :          7/06/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool CheckCharacter(char *str, char ch)  
{

    while(*str != '\0')
    {
        if((*str == ch))    
        {
            break;
        }
        str++;
    }
    
    return (*str == ch);
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    bool bRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character : \n");
    scanf(" %c",&cValue);         

    bRet = CheckCharacter(Arr,cValue);

    if(bRet == true)
    {
        printf("%c is present in %s\n", cValue, Arr);
    }
    else
    {
        printf("%c value is not present in %s\n", cValue, Arr);
    }
    return 0;
}