///////////////////////////////////////////////////////
//     
//  File name :     program55.c
//  Descreption :   Print summation of two numbers.
//  Author :        Prashant V. Surve
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

import java.util.*;

class program55
{
    public static int Addition(int iNo1, int iNo2)
    {
        int iAns = 0;

        iAns = iNo1 + iNo2;
        
        return iAns;
    }

    public static void main(String A[])
    {
        int iValue1 = 0 , iValue2 = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First number: ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter Second number: ");
        iValue2 = sobj.nextInt();

        iRet = Addition(iValue1, iValue2);

        System.out.println("Addition is :"+iRet);

    }
}