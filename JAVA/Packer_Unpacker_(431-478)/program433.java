//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program433.java
//  Descreption :   Project Packer_Unpacker.
//                  Creating a file.
//  Author :        Prashant V. Surve
//  Date :          20/07/2025
//
/////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class program433
{
    public static void main(String A[])
    {
        try
        {
            File fobj = new File("Awsome.txt");

            if(fobj.exists())
            {
                System.out.println("File alrready exist..");

            }
            else
            {
                fobj.createNewFile();
                System.out.println("File Sucessfully created...");

            }
        }
        catch(IOException iobj)
        {}
        catch(Exception eobj)
        {}

    }
}