//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program519.java
//  Descreption :   Count Number of words.(using split function)
//  Author :        Prashant V. Surve
//  Date :          27/07/2025
//
//////////////////////////////////////////////////////////////////////////////

import java.util.*;

class program519
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();
        
        str = str.trim();

        str = str.replaceAll("\\s+"," ");      // one or more

        String tokens[] = str.split(" ");

        System.out.println("Number of words are :"+tokens.length);        
    }
}