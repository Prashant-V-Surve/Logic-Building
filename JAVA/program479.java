//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program479.java
//  Descreption :   Count White Spaces.
//  Author :        Prashant V. Surve
//  Date :          26/07/2025
//
//////////////////////////////////////////////////////////////////////////////

import java.util.*;

class program479
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        int i = 0,iCount = 0;

        for(i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) == ' ')
            {
                iCount++;
            }
        }
        System.out.println("No of White Spaces  : "+iCount);
    }
}