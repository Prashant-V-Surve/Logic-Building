//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program454.java
//  Descreption :   Project Packer_Unpacker.
//                  Updating the file header.
//  Author :        Prashant V. Surve
//  Date :          20/07/2025
//
///////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class program454
{
    public static void main(String A[])
    {
        try
        {
            String Header = "Awsome.txt 30";

            System.out.println("Header Size is: "+Header.length());
            int i = 0;
            for(i = Header.length(); i < 100; i++)
            {
                Header = Header +" ";
            }
            System.out.println("Header Size after update : "+Header.length());

            System.out.println("Updated Header is: "+Header);
        }
        catch(Exception eobj)
        {}

    }
}