//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program516.java
//  Descreption :   Replace multiple white spaces and update string.
//  Author :        Prashant V. Surve
//  Date :          27/07/2025
//
//////////////////////////////////////////////////////////////////////////////

import java.util.*;

class program516
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();
        
        str = str.trim();

        str = str.replaceAll("  "," ");            //worked for only two spaces not more then two

        System.out.println(str);        
    }
}