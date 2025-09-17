////////////////////////////////////////////////////////
//     
//  File name :     program157.c
//  Descreption :   Take string input and Count
//                  Capital.
//  Author :        Prashant V. Surve
//  Date :          24/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    
    while(*str != '\0')
    {   
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }

        str++;

    }
    return iCnt;

}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr); 

    iRet = CountCapital(Arr);

    printf("\nNo of Capital characters : %d\n",iRet);

    return 0;
}