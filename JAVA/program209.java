//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program209.java
//  Descreption :   Display string and Count the letters in the string.
//  Author :        Prashant V. Surve
//  Date :          8/06/2025
//
/////////////////////////////////////////////////////////////////////////////

import java.util.*;

class program209
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        //int iCnt = 0;

        System.out.println("Please Enter String : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        int iCount = 0;
        int iCnt = 0;

        System.out.println(Arr);

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z' )
            {
                iCount++;
            }
            
        }
        System.out.println("Number of small Characters Are : "+iCount); 

    }
}