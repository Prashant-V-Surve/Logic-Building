//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program510.java
//  Descreption :   Copy and Display string.
//  Author :        Prashant V. Surve
//  Date :          27/07/2025
//
//////////////////////////////////////////////////////////////////////////////

// _ _ _India_ _ _ _is_ _my_country_ _ _ _
// After trim
// India_ _ _ _is_ _my_country

import java.util.*;

class program510
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
        boolean bFlag = false;

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] != ' ' )
            {
                Brr[j] = Arr[i];
                j++;
                bFlag = false;
            }
            else if(Arr[i] == ' ')
            {
                if(bFlag == false)
                {
                    Brr[j] = ' ';
                    j++;
                    bFlag = true;
                }
            }
        }

        String output = new String(Brr);

        output = output.trim();
        System.out.println("Updaed string is :"+output);
        System.out.println("Updaed string is :"+output.length());
        
    }
}