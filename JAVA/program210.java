//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program210.java
//  Descreption :   Display string and Count small letters in the string.
//  Author :        Prashant V. Surve
//  Date :          8/06/2025
//
/////////////////////////////////////////////////////////////////////////////

import java.util.*;

class CountString
{
    public int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();

        int iCount = 0;
        int iCnt = 0;

        for(iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z' )
            {
                iCount++;
            }
            
        }

        return iCount;
    }
}

class program210
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        //int iCnt = 0;

        System.out.println("Please Enter String : ");
        String str = sobj.nextLine();

        CountString cobj = new CountString();

        int iRet = cobj.CountSmall(str); 

        System.out.println("Number of small Characters Are : "+iRet); 

    }
}