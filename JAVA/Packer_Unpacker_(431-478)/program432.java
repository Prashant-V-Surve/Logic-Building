//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program432.java
//  Descreption :   Project Packer_Unpacker.
//                  Creating a file.
//  Author :        Prashant V. Surve
//  Date :          20/07/2025
//
/////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class program432
{
    public static void main(String A[])
    {
        try
        {
            File fobj = new File("Awsome.txt");
            fobj.createNewFile();
        }
        catch(IOException iobj)
        {}
        catch(Exception eobj)
        {}

    }
}