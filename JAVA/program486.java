//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program486.java
//  Descreption :   Trim White spaces at start and end of string.
//  Author :        Prashant V. Surve
//  Date :          26/07/2025
//
//////////////////////////////////////////////////////////////////////////////

import java.util.*;

class StringX
{
    public static void Trim(String str)
    {
        int i = 0;

        char Arr[] = str.toCharArray();    // _ _ _jay_ _Ganesh_ _ _         

        int iStart = 0, iEnd = 0;

        if(Arr[0] == ' ')
        {
            System.out.println("Inside first if");
            while((Arr[i] == ' ') && i < Arr.length)
            {
                i++;
            }
        }

        iStart = i;

        i = 0;
        i = Arr.length-1;

        if(Arr[Arr.length-1] == ' ')
        {
            System.out.println("Inside first if");

            while(Arr[i] == ' ')
            {
                i--;
            }
        }

        iEnd = i;

        System.out.println("iStart is :"+iStart);
        System.out.println("iEnd is :"+iEnd);

        System.out.println("Updated String is : ");

        for(i = iStart; i <= iEnd; i++)
        {
            System.out.print(Arr[i]);
        }

        System.out.println();

    }    
}

class program486
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        StringX.Trim(str);
    }
}


// Arr.legth property counts from 1 to end
// but indexing sttarts at 0 so thats why Arr.length