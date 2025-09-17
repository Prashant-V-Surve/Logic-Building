///////////////////////////////////////////////////////
//     
//  File name :     program125.java
//  Descreption :   Print elements in Array.
//  Author :        Prashant V. Surve
//  Date :          23/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;

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

    printf("Entered the elements are :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    //step 2 : use that memory
    

    //Step 3 : free that memory
    free(ptr);

    return 0;
}