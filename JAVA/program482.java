//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program482.java
//  Descreption :   Replace white spaces with other character.
//  Author :        Prashant V. Surve
//  Date :          26/07/2025
//
//////////////////////////////////////////////////////////////////////////////

import java.util.*;

class StringX
{
    public String Replace(String str,char A,char B)
    {
        int i = 0;

        char Arr[] = str.toCharArray();            //Better bc does not create stack for each letter

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == A)
            {
                Arr[i] = B;
            }
        }

        String newstr = new String(Arr);

        return newstr;
        
    }    
}

class program482
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        StringX strobj = new StringX();

        String sRet = strobj.Replace(str,' ','_');

        System.out.println("Updated string is : "+sRet);

    }
}