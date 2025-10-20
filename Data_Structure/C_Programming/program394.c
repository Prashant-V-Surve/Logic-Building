//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program394.c
//  Descreption :   Recursion.                  
//  Author :        Prashant V. Surve
//  Date :          14/07/2025
//
//////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display()
{
    int i = 0;

    printf("Jay Ganesh...\n");

    Display();
}

int main()
{
    Display();

    return 0;
}