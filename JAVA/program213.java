//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program213.java
//  Descreption :   Display string and Count small letters in the string.
//  Author :        Prashant V. Surve
//  Date :          8/06/2025
//
/////////////////////////////////////////////////////////////////////////////

import java.util.*;

import MarvellousLB.MarvellousString; 

class program213
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        //int iCnt = 0;

        System.out.println("Please Enter String : ");
        String data = sobj.nextLine();

        MarvellousString mobj = new MarvellousString(data);

        int iRet = mobj.CountSmall(); 

        System.out.println("Number of small Characters Are : "+iRet); 

    }
}