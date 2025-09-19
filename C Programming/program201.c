//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program201.c
//  Descreption :   Check Pallindrome.(with Flag)
//  Author :        Prashant V. Surve
//  Date :          7/06/2025
//
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool CheckPallindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;
    bool bFlag = true;

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        if(*start != *end)
        {
            bFlag = false;
            break;
        }

        start++;
        end--;
    }

    return bFlag;
}

int main()
{
    char Arr[50] = {'\0'};
    bool bRet = false;

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckPallindrome(Arr);

    if(bRet == true)
    {
        printf("Given string is pallindrome.\n");
    }
    else
    {
        printf("Given string is not pallindrome.\n");
    }

    return 0;
}