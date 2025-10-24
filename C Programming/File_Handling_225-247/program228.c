//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program228.java
//  Descreption :   File_handling Project Buildup.
//                  Opening a file with Read Write permission.
//  Author :        Prashant V. Surve
//  Date :          8/06/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the name of file that you want to open: \n");
    scanf("%s",Fname);

    // O_RDONLY
    // O_WRONLY
    // O_RDWR

    fd = open(Fname,O_RDWR);        ////0 denotes the no is octal (4+2+1 read write execute)

    if(fd == -1)
    {
        printf("Unable to open file.\n");
        return -1;
    }

    printf("File is succesfully open with FD %d\n",fd);

    return 0;   
}