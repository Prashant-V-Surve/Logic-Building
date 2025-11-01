//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program491.java
//  Descreption :   Trim all White spaces.
//  Author :        Prashant V. Surve
//  Date :          26/07/2025
//
//////////////////////////////////////////////////////////////////////////////

import java.util.*;

class program491
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        String sRet = str.replaceAll(" ","");

        System.out.println("Updated string is :"+sRet);
        System.out.println("stirng length: "+sRet.length());

    }
}