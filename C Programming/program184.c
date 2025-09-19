////////////////////////////////////////////////////////
//     
//  File name :     program184.c
//  Descreption :   Take input & print string.
//  Author :        Prashant V. Surve
//  Date :          7/06/2025
//
////////////////////////////////////////////////////////

#include <stdio.h>

/*void StrtoggleX(char *str)  // change
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str -= 32; 
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str += 32; 
        }
        str++;
    }
}
*/
int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character : \n");
    scanf(" %c",&cValue);         // space before %c

    return 0;
}