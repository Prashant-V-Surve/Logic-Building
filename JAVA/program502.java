//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program502.java
//  Descreption :   Check Anagram.(Case sensitive)
//  Author :        Prashant V. Surve
//  Date :          26/07/2025
//
//////////////////////////////////////////////////////////////////////////////

/*
    convert str1 to char array as Arr
    convert str2 to char array as Brr

    create array Count1 of size 26 for Arr
    create array Count2 of size 26 for Brr
    
    travel Arr and maintain the frequency in Count1
    travel Brr and maintain the frequency in Count2

    Compare Count1 & Count2
    If theya re equal return true
    Otherwise return false
*/

import java.util.*;

class Marvellous
{
    public static boolean CheckAnagram(String str1,String str2)
    {
        boolean bFlag = true;
        int i = 0;

        if(str1.length() != str2.length())
        {
            return false;
        }

        int Count[] = new int[26];

        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if (Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                Count[Arr[i]-'a']++;
            }

            if (Brr[i] >= 'a' && Brr[i] <= 'z')
            {
                Count[Brr[i]-'a']--;
            }    
        }
        
        for(i = 0; i < 26; i++)
        {
            if(Count[i] != 0)
            {
                bFlag = false;
                break;
            }
        }

        return bFlag;       
        
    }
}
class program502
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first String : ");
        String str1 = sobj.nextLine();

        System.out.println("Enter the Second String : ");
        String str2 = sobj.nextLine();

        boolean bRet = false;

        bRet = Marvellous.CheckAnagram(str1,str2);

        if(bRet == true)
        {
            System.out.println("Strings are anagram");
        }
        else
        {
            System.out.println("Strings are not anagram");
            
        }
        

    }
}