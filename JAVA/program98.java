///////////////////////////////////////////////////////
//     
//  File name :     program98.java
//  Descreption :   Printing Pattern.
//  Author :        Prashant V. Surve
//  Date :          19/05/2025
//
///////////////////////////////////////////////////////

/*
input : 4   4

Outout :

A   B   C   D
A   B   C   D
A   B   C   D
A   B   C   D

*/         

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char ch= 'A';

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
            {

                System.out.print(ch+"\t");
                    
            }
            System.out.println();
        }
    }
}

class program98
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter the number of Rows:");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Column:");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);
    }
}