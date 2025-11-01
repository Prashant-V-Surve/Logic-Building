//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program495.java
//  Descreption :   Count Characters.(case sensitive)
//  Author :        Prashant V. Surve
//  Date :          26/07/2025
//
//////////////////////////////////////////////////////////////////////////////


import java.util.*;

class program495
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        int aCount = 0,bCount = 0,cCount = 0;

        int i = 0;
        int Count[] = {0,0,0};

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == 'a' || Arr[i] == 'b' || Arr[i] == 'c')
            {
                Count[Arr[i] - 'a']++;
            }
        }
        System.out.println("Frequency of a : "+Count[0]);
        System.out.println("Frequency of b : "+Count[1]);
        System.out.println("Frequency of c : "+Count[2]);

    }
}