//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program487.java
//  Descreption :   Trim White spaces at start and end of string.
//  Author :        Prashant V. Surve
//  Date :          26/07/2025
//
//////////////////////////////////////////////////////////////////////////////

import java.util.*;

class StringX
{
    public static String Trim(String str)
    {
        int i = 0;

        char Arr[] = str.toCharArray();    // _ _ _jay_ _Ganesh_ _ _         

        int iStart = 0, iEnd = 0;

        if(Arr[0] == ' ')
        {
            while((Arr[i] == ' ') && i < Arr.length)
            {
                i++;
            }
        }

        iStart = i;

        i = 0;
        i = Arr.length-1;

        if(Arr[Arr.length - 1] == ' ')
        {
            while(Arr[i] == ' ')
            {
                i--;
            }
        }

        iEnd = i;

        char Brr[] = new char[iEnd - iStart + 1];

        int j = 0;
        for(i = iStart; i <= iEnd; i++,j++)
        {
            Brr[j] = Arr[i];
        }

        return new String(Brr);
    }    
}

class program487
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        String sRet = StringX.Trim(str);

        System.out.println("Updated string is :"+sRet);
        System.out.println("Updated string is : "+sRet.length());
    }
}


//line 45 = +1 is for the -1 in Arr.length. As while creating array index will be considered from zero. 