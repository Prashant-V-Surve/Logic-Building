//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program246.java
//  Descreption :   File_handling Project Buildup.
//                  Performing File system Operations.
//  Author :        Prashant V. Surve
//  Date :          9/06/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd = 0, iRet = 0, iCnt = 0;
    char Fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the file name that you want to open: \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);        //change
    if (fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is succesfully opened : %d\n", fd);

        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                printf("%c\n",Buffer[iCnt]);
            }

            memset(Buffer,'\0',BUFFER_SIZE);
            
        }

        close(fd);
    }


    return 0;
}


//modern operating system by achhut godbole
//operating system by talinberg and data system by his brother.


///#E stdio.h                       #define O