//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program458.java
//  Descreption :   Project Packer_Unpacker.
//                  Operation on string.
//  Author :        Prashant V. Surve
//  Date :          20/07/2025
//
///////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class program458
{
    public static void main(String A[])
    {
        try
        {
            String str = "     Shanivar Vada, Pune     ";

            System.out.println("Original Length: "+str.length());

            str = str.trim();

            System.out.println("Updated lenght: "+str.length());

            String Arr[] = str.split(" ");

            System.out.println("No of tokens: "+Arr.length);
            
        }
        catch(Exception eobj)
        {}

    }
}