//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program214.java
//  Descreption :   Display string and Count small letters in the string.
//                  Update the String.
//  Author :        Prashant V. Surve
//  Date :          8/06/2025
//
/////////////////////////////////////////////////////////////////////////////

//input : HeLLo
// output : #e##0

import java.util.*;

class ResultString
{
    public String str;
    
    public ResultString(String a)
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

    public String UpdateString()
    {
        char Arr[] = str.toCharArray();

        int iCnt = 0;

        for(iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z' )
            {
                Arr[iCnt] = '#';
            }
            
        }

        String ret = new String(Arr);

        return ret;
    
    }
}

class program214
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        //int iCnt = 0;

        System.out.println("Please Enter String : ");
        String data = sobj.nextLine();

        ResultString mobj = new ResultString(data);

        String sRet = null;

        sRet = mobj.UpdateString(); 

        System.out.println("Updated string is : "+sRet); 

    }
}