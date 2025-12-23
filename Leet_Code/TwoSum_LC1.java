//////////////////////////////////////////////////////////////////
//                                                 
//                   1. Two Sum                    
//                                                 
//////////////////////////////////////////////////////////////////


// Time complexity = O(N2)
// Space Complexity = O(1)


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
        int i = 0, j = 0;

        for(i = 0; i < (nums.length - 1); i++)
        {
            for(j = i + 1; j < nums.length;j++)
            {
                if(nums[i] + nums[j] == Target)
                {
                    return new int[]{i,j};
                }
                
            }
        }
        return new int[]{};
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
