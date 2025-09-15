///////////////////////////////////////////////////////////////
//     
//  File name :     program64.c
//  Descreption :   Display sum of Factors and Non factors.
//  Author :        Prashant V. Surve 
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////////////

import java.util.*;

class Number
{
    public void Sum(int iNo)
    {
        int iCnt = 0;
        int iSum1 = 0;
        int iSum2 = 0;
        
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iNo % iCnt != 0)
            {
                iSum1 = iSum1 + iCnt;
            }
            else
            {
                iSum2 = iSum2 + iCnt;
            }
    
        }
        System.out.println("Sum of Factor ; "+iSum2);
        System.out.println("Sum of Non Factor ; "+iSum1);

    }
}

class program64
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ; ");
        int iValue = sobj.nextInt();

        Number nobj = new Number() ;

        nobj.Sum(iValue);

    }
}