//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program225.java
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

    fd = creat("Demo.txt",0777);

    return 0;   
}