//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program206.java
//  Descreption :   Accepting Stirng as input and displaying it's letters.
//  Author :        Prashant V. Surve
//  Date :          7/06/2025
//
/////////////////////////////////////////////////////////////////////////////

import java.util.*;
// there is no \0 in string in java

class program206
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter your name: ");
        String name = sobj.nextLine();

        for(iCnt = 0; iCnt< name.length(); iCnt++)
        {
            System.out.println(name.charAt(iCnt));
        }    

    }
}