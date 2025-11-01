//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program522.java
//  Descreption :   Display Word having maximum character and its value. 
//  Author :        Prashant V. Surve
//  Date :          27/07/2025
//
//////////////////////////////////////////////////////////////////////////////

import java.util.*;

class program522
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
        String Maxstr = null;

        for(int i = 0; i < tokens.length; i++)
        {
            if(iMax < tokens[i].length())
            {
                iMax = tokens[i].length();
                Maxstr = tokens[i];
            }
        }
        System.out.println("Largest word is :"+Maxstr+" having length : "+iMax);

    }
}