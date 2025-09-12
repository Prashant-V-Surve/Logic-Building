///////////////////////////////////////////////////////
//     
//  File name :     program38.c
//  Descreption :   
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int SumFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    if (iNo < 0)    //updater
    {
        iNo = -iNo;
    }           

    for(iCnt = 1; iCnt < iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            
            iSum = iSum + iCnt;

        }
    
    }    
    return iSum;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = SumFactor(iValue);

    printf("Sum of the factor : %d\n", iRet);
    return 0;

}