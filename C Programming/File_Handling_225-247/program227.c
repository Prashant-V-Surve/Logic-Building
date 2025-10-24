//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program227.java
//  Descreption :   File_handling Project Buildup.
//                  creating a file with file system permissions.
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

    printf("Enter the name of file : \n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);        ////0 denotes the no is octal (4+2+1 read write execute)

    if(fd == -1)
    {
        printf("Unable to create file.\n");
        return -1;
    }

    printf("File is succesfully created with FD %d\n",fd);

    return 0;   
}