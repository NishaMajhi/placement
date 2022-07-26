/*
Given a balanced parentheses string s, return the score of the string.

The score of a balanced parentheses string is based on the following rule:

"()" has score 1.
AB has score A + B, where A and B are balanced parentheses strings.
(A) has score 2 * A, where A is a balanced parentheses string.
 

Example 1:

Input: s = "()"
Output: 1


Example 2:

Input: s = "(())"
Output: 2


Example 3:

Input: s = "()()"
Output: 2
 

Constraints:

2 <= s.length <= 50
s consists of only '(' and ')'.
s is a balanced parentheses string.
*/


class Solution {
public:
    int scoreOfParentheses(string s) {
            
        stack<char> st;
        stack<int> score;
        int len = s.length(), i = 0;
        while(i < len){
            if(s[i] == '('){
                st.push('(');
                score.push(0);
            }
            else{
                st.pop();
                if(score.top() == 0){
                    score.pop();
                    score.push(1);
                }
                else{
                    int temp = 0;
                    while(score.top() != 0){
                        temp += score.top();
                        score.pop();
                    }
					score.pop();
					score.push(temp*2);
                }
            }
            i++;
        }
        
        int res = 0;
        while(!score.empty()){
            res += score.top();
            score.pop();
        }
        return res;
    }
};
