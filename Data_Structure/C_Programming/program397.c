//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program397.c
//  Descreption :   Recursion.                  
//  Author :        Prashant V. Surve
//  Date :          14/07/2025
//
//////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display()
{
    static int i = 1;

    if(i <= 5)
    {
        printf("Jay Ganesh... : %d \n",i);
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}