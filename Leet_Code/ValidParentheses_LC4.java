//////////////////////////////////////////////////////////////////
//                                                 
//                   2.Valid Parenthesis                    
//                                                 
//////////////////////////////////////////////////////////////////

// Time complexity = O(N)
// Space Complexity = O(N)


import java.util.Map;
import java.util.Stack;
import java.util.HashMap;

class ValidParentheses
{
    public String str;

    public ValidParentheses(String S)
    {
        this.str = S;
    }
    
    public boolean CheckPara()
    {
        int i = 0;
        char Arr[] = null;

        Arr = str.toCharArray();

    
        Map <Character,Character> myMap = new HashMap<>();
        myMap.put(')','(');
        myMap.put(']','[');
        myMap.put('}','{');

        Stack <Character> parenthesis = new Stack<>();

        for(char c : Arr)
        {
            if(myMap.containsValue(c))
            {
                parenthesis.push(c);
            }
            else if(myMap.containsKey(c))
            {
                if(parenthesis.isEmpty() || parenthesis.pop() != myMap.get(c))
                {
                    return false;
                }
            }

        }
        return (parenthesis.isEmpty());
        
    }

}

class ValidParentheses_LC4
{
    public static void main(String A[])
    {
        boolean bRet = false;

        String str = "(){}[]";

        ValidParentheses vobj = new ValidParentheses(str);

        bRet = vobj.CheckPara();
        
        if(bRet)
        {
            System.out.println("It is Valid Parethesis Sequence.");
        }
        else
        {
            System.out.println("It is Invalid Parenthesis order.");
        }

    }
}
