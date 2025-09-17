///////////////////////////////////////////////////////
//     
//  File name :     program130.java
//  Descreption :   Print elements in Array.
//  Author :        Prashant V. Surve
//  Date :          23/05/2025
//
///////////////////////////////////////////////////////

// accept n no of elements from the consumer and count even
#include <stdio.h>
#include <stdlib.h>

int SumEven(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCnt1 = 0;
        
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSum = iSum + Arr[iCnt];
        }
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
    iRet = SumEven(ptr,iLength);

    printf("No of Odd no : %d",iRet);
    

    //Step 3 : free that memory
    free(ptr);

    return 0;
}