//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program205.java
//  Descreption :   Sring Basics in java(Index Access).
//  Author :        Prashant V. Surve
//  Date :          7/06/2025
//
/////////////////////////////////////////////////////////////////////////////

import java.util.*;

class program205
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name: ");
        String name = sobj.nextLine();

        System.out.println(name.charAt(0));
        System.out.println(name.charAt(1));
        System.out.println(name.charAt(2));

    }
}