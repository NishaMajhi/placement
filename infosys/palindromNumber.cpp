/*
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

For example, 121 is a palindrome while 123 is not.
 

Example 1:

Input: x = 121
Output: true

Explanation: 121 reads as 121 from left to right and from right to left.


Example 2:

Input: x = -121
Output: false

Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.


Example 3:

Input: x = 10
Output: false

Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
*/


class Solution {
public:
    bool isPalindrome(int x) {
       
        //fail in -121
//         vector<int> v;
//         while(x){
//             int rem = x%10;
//             v.push_back(rem);
//             x = x/10;
//         }
        
//         int i = 0;
//         int j = v.size()-1;
//         while(i<j){
//             if(v[i] != v[j])
//                 return false;
//             i++;j--;
//         }
        
//         return true;
        
        
        //using to_string method
        string s;
        s = to_string(x);
        int i = 0;
        int j = s.size()-1;
        while(i<j){
            if(s[i] != s[j])
                return false;
            i++;j--;
        }
        
        return true;
    }
};
