//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program480.java
//  Descreption :   Count White Spaces.
//  Author :        Prashant V. Surve
//  Date :          26/07/2025
//
//////////////////////////////////////////////////////////////////////////////

import java.util.*;

class program480
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        int i = 0,iCount = 0;

        char Arr[] = str.toCharArray();            //Better bc does not create stack for each letter

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == ' ')
            {
                iCount++;
            }
        }
        System.out.println("No of White Spaces  : "+iCount);
    }
}