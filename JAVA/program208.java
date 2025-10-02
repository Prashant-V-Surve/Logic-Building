//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program208.java
//  Descreption :   Display string and characters in string.
//  Author :        Prashant V. Surve
//  Date :          7/06/2025
//
/////////////////////////////////////////////////////////////////////////////

import java.util.*;
// there is no \0 in string in java


class program208
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter your name: ");
        String name = sobj.nextLine();

        char Arr[] = name.toCharArray();

        System.out.println(Arr);

        for(iCnt = 0; iCnt< name.length(); iCnt++)
        {
            System.out.println(name.charAt(iCnt));
        } 

    }
}