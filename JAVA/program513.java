//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program513.java
//  Descreption :   Replace extra multiple spaces with single space.
//  Author :        Prashant V. Surve
//  Date :          27/07/2025
//
//////////////////////////////////////////////////////////////////////////////


import java.util.*;

class program513
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();
        
        str = str.trim();

        str.replaceAll("  "," ");               //Not upto requirement

        System.out.println(str);        
    }
}