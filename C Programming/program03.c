///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   Used to calculate percentage
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////


# include <stdio.h>

int main()
{
    int Total  = 400;
    int Obtained = 323;
    float Percentage = 0.0f;

    Percentage = ((float)Obtained / (float)Total) * 100;

    printf("Percentage is : %.2f%%\n",Percentage);

    return 0;

}




/*

   1) here ((float) obtaoned is example of type cast
   2) if you write %.2f only then the output will not show the sign of percentage

*/   
