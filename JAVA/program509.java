//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program509.java
//  Descreption :   Copy and Display string.
//  Author :        Prashant V. Surve
//  Date :          27/07/2025
//
//////////////////////////////////////////////////////////////////////////////

// _ _ _India_ _ _ _is_ _my_country_ _ _ _
// After trim
// India_ _ _ _is_ _my_country

import java.util.*;

class program509
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();
        
        str = str.trim();

        char Arr[] = str.toCharArray();
        char Brr[] = new char[Arr.length];

        int  i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] != ' ' )
            {
                Brr[j] = Arr[i];
                j++;
            }
        }

        String output = new String(Brr);

        output = output.trim();
        System.out.println("Updaed string is :"+output);
        System.out.println("Updaed string is :"+output.length());
        
    }
}