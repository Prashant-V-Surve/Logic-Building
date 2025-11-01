//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program525.java
//  Descreption :   Display duplicate words.
//  Author :        Prashant V. Surve
//  Date :          27/07/2025
//
//////////////////////////////////////////////////////////////////////////////

// demo hello pune demo code hello india ppa lb
/*
    demo    
    hello  
    
*/

import java.util.*;

class program525
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();
        
        str = str.trim();

        str = str.replaceAll("\\s+"," ");      // one or more

        String tokens[] = str.split(" ");
        
        HashMap <String, Integer> hobj = new HashMap <String, Integer>();

        for(String s : tokens)
        {
            if(hobj.containsKey(s))
            {
                hobj.put(s,hobj.get(s)+1); 
            }
            else
            {
                hobj.put(s,1);
            }
        }

        for(String s : hobj.keySet())
        {
            if(hobj.get(s) > 1)
            {
                System.out.println(s);
            }
        }

    }
}