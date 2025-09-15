////////////////////////////////////////////////////////
//     
//  File name :     program53.c
//  Descreption :   Print summation of two numbers.
//  Author :        Prashant V. Surve
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

import java.util.*;   // we can use scanner instead of*

class program53
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter no. 1 : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter no. 2 : ");
        int iNo2 = sobj.nextInt();

        int Ans = iNo1 + iNo2;
        System.out.println("Summation is : "+Ans); 
    }
}