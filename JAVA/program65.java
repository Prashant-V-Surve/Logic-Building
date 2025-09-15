///////////////////////////////////////////////////////
//     
//  File name :     program65.c
//  Descreption :   Counting Digit.
//  Author :        Prashant V. Surve
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

import java.util.*;

class Digits
{
    public int CountDigit(int iNo)
    {
        int iCnt = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iCnt++;
            iNo = iNo / 10;
            
        }
        return iCnt;
    }
}

class program65
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ; ");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits() ;

        int iRet = dobj.CountDigit(iValue);

        System.out.println("Number oF Digits : "+iRet);




    }



}