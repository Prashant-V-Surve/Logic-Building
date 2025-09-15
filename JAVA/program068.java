///////////////////////////////////////////////////////
//     
//  File name :     program68.c
//  Descreption :   Count Digit.
//  Author :        Prashant V. Surve
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

import java.util.*;

class Digits
{
    public int CountDigit(int iNo)
    {
        int iDigit = 0;
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo > 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }
        return iCnt;
    }
}

class program068
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ; ");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.CountDigit(iValue);

        System.out.println("Number of Digits: "+iRet);

    }
}
