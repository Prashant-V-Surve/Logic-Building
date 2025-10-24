//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program459.java
//  Descreption :   Project Packer_Unpacker.
//                  Operation on string.
//  Author :        Prashant V. Surve
//  Date :          20/07/2025
//
///////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class program459
{
    public static void main(String A[])
    {
        try
        {
            String str = "     Bajirao Peshwa's Shanivar Vada, Pune     ";

            System.out.println("Original Length: "+str.length());

            str = str.trim();

            System.out.println("Updated lenght: "+str.length());

            String Arr[] = str.split(" ");

            System.out.println("No of tokens: "+Arr.length);

            int i = 0;

            for(i = 0; i < Arr.length; i++)
            {
                System.out.println(Arr[i]);
            }
        }
        catch(Exception eobj)
        {}
    }
}