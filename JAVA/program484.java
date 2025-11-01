//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program484.java
//  Descreption :   Replace small character with other capital character.
//  Author :        Prashant V. Surve
//  Date :          26/07/2025
//
//////////////////////////////////////////////////////////////////////////////

import java.util.*;

class StringX
{
    public static String Replace(String str,char A,char B)              //change
    {
        int i = 0;

        char Arr[] = str.toCharArray();            

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

class program484
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        //StringX strobj = new StringX();

        String sRet = StringX.Replace(str,'a','A');

        System.out.println("updated String is : "+sRet);
    }
}