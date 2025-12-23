//////////////////////////////////////////////////////////////////
//                                                 
//                   1. Two Sum                    
//                                                 
//////////////////////////////////////////////////////////////////


// Time complexity = O(N)
// Space Complexity = O(N)


import java.util.Map;
import java.util.HashMap;
import java.util.Arrays;


class twoSum
{
    public int []nums;
    public int Target;

    public twoSum(int []A , int B)
    {
        this.nums = A;
        this.Target = B;
    }

    public int[] Pair()
    {
        int i = 0;
        int SecondPara = 0;

        Map<Integer, Integer> myMap = new HashMap<>();

        for(i = 0 ; i< nums.length; i++)
        {
            myMap.put(nums[i],i);
        }

        for(i = 0; i < (nums.length - 1); i++)
        {
            SecondPara = Target - nums[i];
            
            if(myMap.containsKey(SecondPara) && myMap.get(SecondPara) != i)
            {
                return new int[]{i,myMap.get(SecondPara)};
            }
        }

        return new int[] {};

        
    } 

}

class TwoSum_LC1
{
    public static void main(String A[])
    {
        int[] iRet  = new int[2];

        int nums[] = {3,3};
        int Target = 6;

        twoSum tobj = new twoSum(nums,Target);
        
        iRet = tobj.Pair();

        System.out.println(Arrays.toString(iRet));

    }
}
