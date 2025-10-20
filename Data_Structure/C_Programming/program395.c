//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program395.c
//  Descreption :   Recursion.                  
//  Author :        Prashant V. Surve
//  Date :          14/07/2025
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 0;

    printf("Jay Ganesh... : %d \n",i);

    i++;
    
    Display();
}

int main()
{
    Display();

    return 0;
}