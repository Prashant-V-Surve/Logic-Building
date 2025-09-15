///////////////////////////////////////////////////////
//     
//  File name :     program70.c
//  Descreption :   Display Even Digit.
//  Author :        Prashant V. Surve
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

import java.util.*;

class Digits
{
    public void DispalayEven(int iNo)
    {
        int iDigit = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            if((iDigit % 2) == 0)
            {
                System.out.println(iDigit);                
            }
            iNo = iNo / 10;
        }
    }
}

class program70
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ; ");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits();

        dobj.DispalayEven(iValue);
    }
}