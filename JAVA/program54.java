///////////////////////////////////////////////////////
//     
//  File name :     program54.c
//  Descreption :   Print summation of two numbers.
//  Author :        Prashant V. Surve
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

import java.util.*;   // we can use scanner instead of*

class program54
{
    public static void main(String A[])

    {    
        Scanner sobj = null;
        int iNo1 = 0, iNo2 = 0, iAns = 0;

        sobj = new Scanner(System.in);

        System.out.println("Enter no. 1 : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter no. 1 : ");
        iNo2 = sobj.nextInt();

        iAns = iNo1 + iNo2;

        System.out.println("Addition is : "+iAns);
    }
}