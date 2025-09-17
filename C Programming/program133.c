#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Search(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        return false;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]== iNo)
        {
            break;
        }
    }
    
    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }


}

int main()
{
    int *iPtr = NULL;
    int iLength = 0;
    int iValue = 0;
    bool bRet = false;
    int iCnt= 0;

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

    bRet = Search(iPtr, iLength, iValue);

    if(bRet = true)
    {
        printf("%d is present in the array.", iValue);
    }
    else
    {
        printf("%d is not present in the array.", iValue);

    }

    free(iPtr);

    return  0;
}