///////////////////////////////////////////////////////
//     
//  File name :     program124.java
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

    printf("Enter the number of elements: \n");
    scanf("%d",&iLength);
    
    // Step 1 : Allocate the memory
    ptr = (int *)malloc(iLength * sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Unable to collect memory\n");
        return -1;
    }

    //step 2 : use that memory


    //Step 3 : free that memory
    free(ptr);

    return 0;
}