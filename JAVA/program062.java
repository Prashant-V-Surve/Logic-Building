///////////////////////////////////////////////////////
//     
//  File name :     program62.c
//  Descreption :   Display Non Factors.
//  Author :        Prashant V. Surve
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

import java.util.*;

class Number
{
    public void DisplayNonFactor(int iNo)
    {
        int iCnt = 0;
        
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iNo % iCnt != 0)
            {
                System.out.println(iCnt);

            }
        } 
          
    }
}

class program062
{
    public static void main(String A[])
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ; ");
        int iValue = sobj.nextInt();

        Number nobj = new Number() ;

        nobj.DisplayNonFactor(iValue);

    }
}
