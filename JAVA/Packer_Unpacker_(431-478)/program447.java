//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program447.java
//  Descreption :   Project Packer_Unpacker.
//                  Check Directory.
//  Author :        Prashant V. Surve
//  Date :          20/07/2025
//
//////////////////////////////////////////////////////////////////////////////


import java.util.*;
import java.io.*;

class program447
{
    public static void main(String A[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the name of Directory :");
            String DirName = sobj.nextLine();

            File fobj = new File(DirName);

            if(fobj.exists())
            {
                System.out.println("Directory is present");
            }
            else
            {
                System.out.println("There is no such directory");
            }
        }
        catch(Exception eobj)
        {}

    }
}