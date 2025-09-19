//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program202.c
//  Descreption :   Check Pallindrome.(without Flag)
//  Author :        Prashant V. Surve
//  Date :          7/06/2025
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;

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
            break;
        }

        start++;
        end--;
    }

    if(start > end)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Arr[50] = {'\0'};
    bool bRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);       

    bRet = CheckPallindrome(Arr);

    if(bRet == true)
    {
        printf("Given string is pallindrome.\n");
    }
    else
    {
        printf("Given string is not a pallindrome.\n");
    }

    return 0;
}

// time complexity = O(N + N/2)