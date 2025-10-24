//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program234.java
//  Descreption :   File_handling Project Buildup.
//                  Opening a file with Read Write permission.
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
    char Buffer[] = "India is my country";

    printf("Enter the file name that you want to open: \n");
    scanf("%s",Fname);

    fd = open(Fname, O_WRONLY | O_APPEND);        //change

    if (fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is succesfully opened : %d\n", fd);

        iRet = write(fd,Buffer,strlen(Buffer));

        printf("%d bytes get written sucessfully\n", iRet);

        close(fd);
    }


    return 0;
}



///#E stdio.h                       #define O