////////////////////////////////////////////////////////
//     
//  File name :     program150.c
//  Descreption :   Check Digit character.
//  Author :        Prashant V. Surve
//  Date :          24/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool CheckDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter Character :\n");
    scanf("%c",&cValue);

    bRet = CheckDigit(cValue);

    if(bRet == true)
    {
        printf("%c is Digit.\n", cValue);
    }
    else
    {
        printf("%c is not Digit.\n", cValue);
    }


    return 0;
}