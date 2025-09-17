////////////////////////////////////////////////////////
//     
//  File name :     program148.c
//  Descreption :   Check Capital alphabet character.
//  Author :        Prashant V. Surve
//  Date :          24/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool CheckCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = CheckCapital(cValue);

    if(bRet == true)
    {
        printf("%c is capital.\n", cValue);
    }
    else
    {
        printf("%c is not capital.\n", cValue);
    }


    return 0;
}