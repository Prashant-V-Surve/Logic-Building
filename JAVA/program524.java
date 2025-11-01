//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program524.java
//  Descreption :   Display word and count its frequency in string.
//  Author :        Prashant V. Surve
//  Date :          27/07/2025
//
//////////////////////////////////////////////////////////////////////////////

// demo hello pune demo code hello india ppa lb
/*
        HashaMap
    ----------------
    Key     value
    -----------------
    demo    2
    hello   3
    pune    1
    code    1
    india   1
    ppa     1
    lb      1

    Accept string
    Remove extra white space using string
    remove in between white places using replaceall
    tokenise the string using split
    create hashnmap with string as key and int as value
    travel tokens array and update hasmap
    travel hashmap and display result
*/

import java.util.*;

class program524
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
            System.out.println(s+" : "+hobj.get(s));
        }

    }
}