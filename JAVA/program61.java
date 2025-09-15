///////////////////////////////////////////////////////
//   
//  File name :     program61.c
//  Descreption :   Display sum of Factors.
//  Author :        Prashant V. Surve
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

import java.util.*;

class Number
{
    public int DisplaySumFactor(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;
        
        for(iCnt = 1; iCnt<= (iNo)/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;

            }
        } 
        return iSum;  
    }
}

class program61
{
    public static void main(String A[])
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ; ");
        int iValue = sobj.nextInt();

        Number nobj = new Number() ;

        iRet = nobj.DisplaySumFactor(iValue);

        System.out.println("Summation of Factors : "+iRet);        


    }
}