///////////////////////////////////////////////////////
//     
//  File name :     program127.java
//  Descreption :   Print elements in Array.
//  Author :        Prashant V. Surve
//  Date :          23/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Summation(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;
        
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum += Arr[iCnt];
    }
    return iSum;

}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements: \n");
    scanf("%d",&iLength);
    
    // Step 1 : Allocate the memory
    ptr = (int *)malloc(iLength * sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Unable to collect memory\n");
        return -1;
    }

    printf("Enter the Elements : \n");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d\n",&ptr[iCnt]);
    }

    //step 2 : use that memory
    iRet = Summation(ptr,iLength);

    printf("Summation is : %d",iRet);
    

    //Step 3 : free that memory
    free(ptr);

    return 0;
}