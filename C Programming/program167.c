////////////////////////////////////////////////////////
//     
//  File name :     program167.c
//  Descreption :   Take string input and find length.
//  Author :        Prashant V. Surve
//  Date :          6/06/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);  //^ gives means not or negative until enter is given as command

    iRet = strlen(Arr); // inbuilt function

    printf("Number of Chracters : %d\n",iRet);

    return 0;
}