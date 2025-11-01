//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program485.java
//  Descreption :   Replace small character with other capital character.
//                  Using inbuilt function
//  Author :        Prashant V. Surve
//  Date :          26/07/2025
//
//////////////////////////////////////////////////////////////////////////////

import java.util.*;

class program485
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        //StringX strobj = new StringX;

        String sRet = str.replaceAll("a","A");                   // java inbuilt function

        System.out.println("updated String is : "+sRet);
    }
}