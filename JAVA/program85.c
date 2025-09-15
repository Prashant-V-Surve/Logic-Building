///////////////////////////////////////////////////////
//     
//  File name :     program85.c
//  Descreption :   Printing Pattern.
//  Author :        Prashant V. Surve
//  Date :          18/05/2025
//
///////////////////////////////////////////////////////

//Input : 4     #
//Outout : #    #   #   #

//Input : 5    #
//Outout : #    #   #   #   #

//Input : 3    z
//Outout : z    z   z

/*
    start
        Accept the frequency
        Iterate from one to that frequency
            display * on screen
        continue
    stop    
*/

#include <stdio.h>

void Display(int iNo, char ch)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo ; iCnt++)  // 2N
    {
        printf("%c\t",ch);
    }

    printf("\n");

}

int main()
{
    int iValue = 0;
    char cValue = '\0';

    printf(" Enter frequency : ");
    scanf("%d",&iValue);

    printf(" Enter Character :\n ");
    scanf("%c",&cValue);             //ERROR : the input is taken as space

    printf("Accepted character is : %c",cValue);

    Display(iValue, cValue);

    return 0;

}

// Time compexity O(N).
// Where N >= 0 and N <= Infinity.
// where N is natural number.