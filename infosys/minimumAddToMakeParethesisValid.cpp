/*
A parentheses string is valid if and only if:

It is the empty string,
It can be written as AB (A concatenated with B), where A and B are valid strings, or
It can be written as (A), where A is a valid string.
You are given a parentheses string s. In one move, you can insert a parenthesis at any position of the string.

For example, if s = "()))", you can insert an opening parenthesis to be "(()))" or a closing parenthesis to be "())))".
Return the minimum number of moves required to make s valid.

 
Example 1:

Input: s = "())"
Output: 1


Example 2:

Input: s = "((("
Output: 3
 

Constraints:

1 <= s.length <= 1000
s[i] is either '(' or ')'.
*/


class Solution {
public:
    int minAddToMakeValid(string s) {
             
        int count=0;
        
        //create a stack for push the open Parentheses
        stack<char> st;
        
        for(int i=0;i<s.size();i++){
            
            //if it is opening Parentheses then push it into stack
            if(s[i] == '('){
                st.push(s[i]);
            }
            
            //otherwisecheck for two condition
            else{
                
              //if stack is empty then increase the count
                if(st.empty()){
                    count++;
                }
            
            //if stack is not empty then pop the top element of stack
                if(!st.empty()){
                    st.pop();
                 }
            }
       }
        
        //return stack.size + count
        return (count + st.size());
    }
};
