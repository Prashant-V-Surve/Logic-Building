#include <stdio.h>
#include <stdlib.h>


int Minimum(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid input\n");
        return -1;
    }

    iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
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

    iRet = Minimum(iPtr, iLength);

    printf("Minimum value is :%d\n", iRet);

    free(iPtr);

    return  0;
}