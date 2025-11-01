//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program490.java
//  Descreption :   Trim White spaces at start and end of string.
//                  (using Inbuilt Function)
//  Author :        Prashant V. Surve
//  Date :          26/07/2025
//
//////////////////////////////////////////////////////////////////////////////

import java.util.*;

class program490
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        String sRet = str.trim();

        System.out.println("Updated string is :"+sRet);
        System.out.println("stirng length: "+sRet.length());

    }
}