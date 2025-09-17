#include <stdio.h>
#include <stdlib.h>


void MaximumMinimum(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0, iMax = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid input\n");
    }

    iMax = Arr[0];
    iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }

        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }    



    
    return iMin;

}

int main()
{
    int *iPtr = NULL;
    int iLength = 0;
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
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);

    }

    MaximumMinimum(iPtr, iLength);

    free(iPtr);

    return  0;
}

// time complexity O(N)