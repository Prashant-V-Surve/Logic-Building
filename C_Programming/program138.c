#include <stdio.h>
#include <stdlib.h>


int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt])
        {
            iCount++;
        }
    }
    
    return iCount;

}

int main()
{
    int *iPtr = NULL;
    int iLength = 0;
    int iValue = 0;
    int iCnt= 0;
    int iRet = 0;

    printf("Enter number of elmnets; \n");
    scanf("%d", &iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory.");
    }

    printf("Enter the elemats: \n");
    for(iCnt = 0; iCnt<= iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);

    }

    printf("Enter the value you want to search : \n");
    scanf("%d",&iValue);

    iRet = Frequency(iPtr, iLength, iValue);

    if(iRet = -1)
    {
        printf("There is issue in the input.");
    }
    else
    {
        printf("%d appears %d times in the array\n", iValue, iRet);

    }

    free(iPtr);

    return  0;
}