//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program456.java
//  Descreption :   Project Packer_Unpacker.
//                  Operation on string.
//  Author :        Prashant V. Surve
//  Date :          20/07/2025
//
///////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class program456
{
    public static void main(String A[])
    {
        try
        {
            String str = "Shanivar Vada, Pune";               

            System.out.println("Original Length: "+str.length());

            str = str.trim();                                            //focus on starting and ending of string

            System.out.println("Updated length: "+str.length());
        }
        catch(Exception eobj)
        {}

    }
}