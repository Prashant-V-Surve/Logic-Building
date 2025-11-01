//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program521.java
//  Descreption :   Display words and count characters in each word.
//  Author :        Prashant V. Surve
//  Date :          27/07/2025
//
//////////////////////////////////////////////////////////////////////////////

import java.util.*;

class program521
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();
        
        str = str.trim();

        str = str.replaceAll("\\s+"," ");      // one or more

        String tokens[] = str.split(" ");

        for(int i = 0; i < tokens.length; i++)
        {
            System.out.println(tokens[i]+" : "+tokens[i].length());
        }
    }
}