////////////////////////////////////////////////////////
//     
//  File name :     program186.c
//  Descreption :   Count character in string.
//  Author :        Prashant V. Surve
//  Date :          7/06/2025
//
////////////////////////////////////////////////////////

#include <stdio.h>

int CharFrequency(char *str, char ch)  
{
    int  iCount = 0;
    
    while(*str != '\0')
    {

        if((*str == ch) || (*str == ch + 32))           // Problem
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
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character : \n");
    scanf(" %c",&cValue);         

    iRet = CharFrequency(Arr, cValue);

    printf("%c characters Occurs %d times\n", cValue, iRet);
    return 0;
}



//Problem : at line no 18 the condition only satisfies if given input is int uppercase but check if the input given is in lower case will not produce the intended results,