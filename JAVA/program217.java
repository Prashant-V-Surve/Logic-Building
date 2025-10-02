//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program217.java
//  Descreption :   Display the elements in Array and count the number of  
//                  even elements.
//  Author :        Prashant V. Surve
//  Date :          8/06/2025
//
/////////////////////////////////////////////////////////////////////////////

import java.util.*;

class NNumberX
{
    public int CountEven(int Arr[])
    {
        int iCount = 0;
        int iCnt = 0;
        
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iCount++;
            }
        }
        return iCount;
       
    }
}

class program217
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        int iCnt = 0;

        System.out.println("Enter elements : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements of the array are : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

        NNumberX nobj = new NNumberX();

        int iRet = 0;

        iRet = nobj.CountEven(Arr);

        System.out.println("Number of Even Elements : "+iRet);      

        Arr = null;
        sobj = null;

    }
}