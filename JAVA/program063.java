///////////////////////////////////////////////////////
//     
//  File name :     program63.c
//  Descreption :   Display sum of NonFactors.
//  Author :        Prashant V. Surve
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

import java.util.*;

class Number
{
    public int SumNonFactor(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;
        
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iNo % iCnt != 0)
            {
                iSum = iSum + iCnt;

            }
        } 
        return iSum;
    }
}

class program063
{
    public static void main(String A[])
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ; ");
        int iValue = sobj.nextInt();

        Number nobj = new Number() ;

        iRet = nobj.SumNonFactor(iValue);

        System.out.println("Summation of non factors is : "+iRet);


    }
}
