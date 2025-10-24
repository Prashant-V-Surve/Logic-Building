//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program237.java
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

int main()
{
    int fd = 0, iRet = 0;
    char Fname[20] = {'\0'};
    char Buffer[50] = {'\0'};

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

        iRet = read(fd,Buffer,11);

        printf("%d bytes get read sucessfully\n", iRet);

        printf("Data from file is : %s\n",Buffer);

//here offset will be at the end because file is not closed here.

        iRet = read(fd,Buffer,20);

        printf("%d bytes get read sucessfully\n", iRet);

        printf("Data from file is : %s\n",Buffer);

        close(fd);
    }


    return 0;
}



///#E stdio.h                       #define O