///////////////////////////////////////////////////////
//     
//  File name :     program72.c
//  Descreption :   Count Even Digits.
//  Author :        Prashant V. Surve
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

import java.util.*;

class Digits
{
    public int CountEven(int iNo)
    {
        
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo > 0)
        {
            //iDigit = iNo % 10;
            
            if(((iNo % 10) % 2) == 0)
            {
                iCnt++;              
            }
            iNo = iNo/10;
        }
        return iCnt;
    }
}

class program72
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ; ");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits() ;

        int iRet = dobj.CountEven(iValue);

        System.out.println("Number of even digits : "+iRet);

    }
}