//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program481.java
//  Descreption :   Replace white spaces with other character.
//  Author :        Prashant V. Surve
//  Date :          26/07/2025
//
//////////////////////////////////////////////////////////////////////////////

import java.util.*;

class program481
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        int i = 0;

        char Arr[] = str.toCharArray();            //Better bc does not create stack for each letter

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == ' ')
            {
                Arr[i] = '_';
            }
        }

        String newstr = new String(Arr);

        System.out.println("Updated string is : "+newstr);
    }
}