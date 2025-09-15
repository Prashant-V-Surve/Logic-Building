///////////////////////////////////////////////////////
//     
//  File name :     program60.c
//  Descreption :   Display Factors of number.
//  Author :        Prashant V. Surve
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

import java.util.*;

class Number
{
    public void DisplayFactor(int iNo)
    {
        int iCnt = 0;
        
        System.out.println("Factors of Given number :");
        
        for(iCnt = 1; iCnt<= (iNo)/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }   
    }
}

class program060
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ; ");
        iValue = sobj.nextInt();

        Number nobj = new Number() ;

        nobj.DisplayFactor(iValue);

        


    }
}
