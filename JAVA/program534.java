//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program534.java
//  Descreption :   Check Pallindrome in string.
//  Author :        Prashant V. Surve
//  Date :          27/07/2025
//
//////////////////////////////////////////////////////////////////////////////

// Input : hello demo madam nayan ppa level radar
// Output : nayan madam level radar

import java.util.*;

class program534
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter word :");
        String str = sobj.nextLine();
        
        str = str.trim();

        String tokens[] = str.split(" "); 

        for(String s : tokens)
        {
            StringBuilder sb = new StringBuilder(s);

            sb.reverse();

            if(s.equals(new String(sb)))
            {
                System.out.println(s);
            }
        }        
    }
}