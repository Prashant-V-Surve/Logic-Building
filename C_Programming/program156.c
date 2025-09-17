////////////////////////////////////////////////////////
//     
//  File name :     program156.c
//  Descreption :   Take string input and Print
//                  Length.
//  Author :        Prashant V. Surve
//  Date :          24/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int StrlenX(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {   
        str++;
        iCnt++;
    }
    
    return iCnt;    
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr); 

    iRet = StrlenX(Arr);

    printf("No of characters are : %d\n",iRet);

    return 0;
}