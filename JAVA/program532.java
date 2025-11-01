//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program532.java
//  Descreption :   Reverse string (reverse words on place).
//  Author :        Prashant V. Surve
//  Date :          27/07/2025
//
//////////////////////////////////////////////////////////////////////////////

// Input : abcdefg hijk
// Output : kjih gfedcba

import java.util.*;

class program532
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();
        
        str = str.trim();

        str = str.replaceAll("\\s+"," ");      // one or more

        String tokens[] = str.split(" ");

        StringBuilder sb = null;

        StringBuilder newstr = new StringBuilder();

        for(String s : tokens)
        {
            sb = new StringBuilder(s);

            (newstr.append(sb.reverse())).append(" ");
            //newstr.append(" ");

        }

        String finalstr = new String(newstr);

        System.out.println(finalstr.trim());        
    }
}