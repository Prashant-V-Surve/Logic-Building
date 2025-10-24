//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program440.java
//  Descreption :   Project Packer_Unpacker.
//                  Reading Data from the file.
//  Author :        Prashant V. Surve
//  Date :          20/07/2025
//
//////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class program440
{
    public static void main(String A[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the name of File that you want to Open:");
            String Fname = sobj.nextLine();

            File fobj = new File(Fname);

            if(fobj.exists())
            {
                FileInputStream fiobj = new FileInputStream(fobj);
                byte Arr[] = new byte[1024];

                int iRet = 0;

                System.out.println("Data from file is : ");

                while((iRet = fiobj.read(Arr)) != -1)
                {
                    String str = new String(Arr);
                    System.out.print(str);
                }
                System.out.println();
            }
            else
            {
                System.out.println("File not present in current Directory...");
                return;
            }
        }
        catch(IOException iobj)
        {}
        catch(Exception eobj)
        {}

    }
}