//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program242.java
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

int main()
{
    int fd = 0, iRet = 0;
    char Fname[20] = {'\0'};
    char Buffer[10] = {'\0'};

    printf("Enter the file name that you want to open: \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY); 
    
    if (fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is succesfully opened : %d\n", fd);

        while((iRet = read(fd,Buffer,10)) != 0)
        {
            //printf("%s",Buffer);
            write(1,Buffer,iRet);
            memset(Buffer,'\0',10);
        }

        close(fd);
    }


    return 0;
}



///#E stdio.h                       #define O