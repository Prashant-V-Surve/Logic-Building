//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program437.java
//  Descreption :   Project Packer_Unpacker.
//                  Writing Data in the file.
//  Author :        Prashant V. Surve
//  Date :          20/07/2025
//
/////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class program437
{
    public static void main(String A[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the name of File that you want to create:");
            String Fname = sobj.nextLine();

            File fobj = new File(Fname);

            if(fobj.exists())
            {
                FileOutputStream foobj = new FileOutputStream(fobj);
                String str = "Jay Ganesh...";

                byte Arr[] = str.getBytes();             //change for error
                
                foobj.write(Arr);
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