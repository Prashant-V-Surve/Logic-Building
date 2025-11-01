//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program538.java
//  Descreption :   Summation of elements of matrix.
//  Author :        Prashant V. Surve
//  Date :          27/07/2025
//
//////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Matrix
{
    public int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int [A][B];
    }

    public void Accept()
    {
        System.out.println("Enter the elements of matrix : ");

        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        for( i = 0; i < Arr.length; i++)
        {
            for(j = 0 ; j < Arr.length; j++)
            {
                Arr[i][j] = sobj.nextInt();        
            }
        }
        
    }

    public void Display()
    {
        System.out.println("Elements of the matrix are : ");

        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int CountEven()
    {
        int i = 0, j = 0, iCount = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if((Arr[i][j] % 2) == 0)
                {
                    iCount++;
                }
            }
        }
        return iCount;
    }

    public int Summation()
    {
        int i = 0, j = 0, iSum = 0;

        for(i=0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                iSum = iSum + Arr[i][j];
            }
        }

        return iSum; 
    }
}

class program538
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of Rows");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of Columns");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();

        mobj.Display();

        int iRet = 0;

        iRet = mobj.CountEven();

        System.out.println("The number of even elemnts in matrix is : "+iRet);

        iRet = mobj.Summation();

        System.out.println("The summation of number of elemnts in matrix is : "+iRet);

        
    }
}