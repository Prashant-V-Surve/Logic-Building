//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program523.java
//  Descreption :   Display Max character word and index of that number.
//  Author :        Prashant V. Surve
//  Date :          27/07/2025
//
//////////////////////////////////////////////////////////////////////////////

import java.util.*;

class program523
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();
        
        str = str.trim();

        str = str.replaceAll("\\s+"," ");      // one or more

        String tokens[] = str.split(" ");

        for(int i = 0; i < tokens.length; i++)
        {
            System.out.println(tokens[i]+" : "+tokens[i].length());
        }
        
        int iMax = 0;
        int MaxIndex = 0;

        for(int i = 0; i < tokens.length; i++)
        {
            if(iMax < tokens[i].length())
            {
                iMax = tokens[i].length();
                MaxIndex = i;
            }
        }
        System.out.println("Largest word is :"+tokens[MaxIndex]+" having length : "+iMax);

    }
}