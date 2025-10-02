//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program212.java
//  Descreption :   Display string and Count small letters in the string.
//  Author :        Prashant V. Surve
//  Date :          8/06/2025
//
/////////////////////////////////////////////////////////////////////////////

import java.util.*;

class CountString
{
    public String str;
    
    public CountString(String a)
    {
        this.str = a;
    }
    

    public int CountSmall()
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

class program212
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        //int iCnt = 0;

        System.out.println("Please Enter String : ");
        String data = sobj.nextLine();

        CountString mobj = new CountString(data);

        int iRet = mobj.CountSmall(); 

        System.out.println("Number of small Characters Are : "+iRet); 

    }
}