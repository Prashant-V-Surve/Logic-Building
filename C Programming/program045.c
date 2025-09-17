///////////////////////////////////////////////////////
//     
//  File name :     program41.c
//  Descreption :   
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    int iNo = 751;
    int iDigit = 0;

    iDigit = iNo % 10; 
    printf("Digit is :%d\n", iDigit);   //1      
    iNo = iNo /10;
    printf("Updated iNo :%d\n", iNo);

    iDigit = iNo % 10; 
    printf("Digit is :%d\n", iDigit);   //5
    iNo = iNo /10;
    printf("Updated iNo :%d\n", iNo);

    iDigit = iNo % 10;                  //7
    printf("Digit is :%d\n", iDigit);
    iNo = iNo /10;
    printf("Updated iNo :%d\n", iNo);

}