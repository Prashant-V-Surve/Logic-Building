//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program446.java
//  Descreption :   Project Packer_Unpacker.
//                  Copying a file.
//  Author :        Prashant V. Surve
//  Date :          20/07/2025
//
//////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class program446
{
    public static void main(String A[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the name of Source File :");
            String Source = sobj.nextLine();

            System.out.println("Enter the name of Destinatio File:");
            String Destination = sobj.nextLine();

            File fSource = new File(Source);
            if(fSource.exists() == false)
            {
                System.out.println("Source file is not present..");
                return;
            }
        
            File fDestination = new File(Destination);
            if(fDestination.exists() == true)
            {
                System.out.println("Destination file is present..");
            }

            fDestination.createNewFile();

            FileInputStream fiobj = new FileInputStream(fSource);
            FileOutputStream foobj = new FileOutputStream(fDestination);

            byte Buffer[] = new byte[1024];
            int iRet = 0;

            while((iRet = fiobj.read(Buffer)) != -1)
            {
                foobj.write(Buffer,0,iRet);
            }

            System.out.println("File copy done");

        }
        catch(Exception eobj)
        {}

    }
}