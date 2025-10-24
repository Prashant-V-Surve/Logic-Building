//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program230.java
//  Descreption :   File_handling Project Buildup.
//                  Opening a file with Read Write permission.
//  Author :        Prashant V. Surve
//  Date :          9/06/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the file name that you want to open: \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is succesfully opened : %d\n", fd);
        close(fd);
    }

    return 0;
}