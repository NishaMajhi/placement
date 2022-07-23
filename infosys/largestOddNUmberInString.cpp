/*
You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty
substring of num, or an empty string "" if no odd integer exists.

A substring is a contiguous sequence of characters within a string.


Example 1:

Input: num = "52"
Output: "5"

Explanation: The only non-empty substrings are "5", "2", and "52". "5" is the only odd number.


Example 2:

Input: num = "4206"
Output: ""

Explanation: There are no odd numbers in "4206".


Example 3:

Input: num = "35427"
Output: "35427"

Explanation: "35427" is already an odd number.
 

Constraints:

1 <= num.length <= 105
num only consists of digits and does not contain any leading zeros.
*/

class Solution {
public:
    string largestOddNumber(string num) {
        
        
        int i = num.size()-1;
        
        while(!num.empty()){
            
            //first we check for the ending number if it is odd then return the string as resultant string
            if(num[i]%2 == 1)
                return num;
            
            //if the number is not odd then decrease the size and pop out the even number from the string
            else{
                i--;
                num.pop_back();
            }
            
        } 
        //if there no odd number then return empty string
        return "";
    }
};
