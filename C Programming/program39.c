///////////////////////////////////////////////////////
//     
//  File name :     program39.c
//  Descreption :   
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

int CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    if (iNo<0)    //updater
    {
        iNo = -iNo;
    }           

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }        
    }    

    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    bRet = CheckPerfect(iValue);
    
    if (bRet == true)
    {
        printf("%d is perfect number\n",iValue);
    }
    else
    {
        printf("%d is not perfect number\n",iValue);
    }

    return 0;
}