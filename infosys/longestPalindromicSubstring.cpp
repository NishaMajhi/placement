/*
Given a string s, return the longest palindromic substring in s.

 
Example 1:

Input: s = "babad"
Output: "bab"

Explanation: "aba" is also a valid answer.


Example 2:

Input: s = "cbbd"
Output: "bb"
 

Constraints:

1 <= s.length <= 1000
s consist of only digits and English letters.
*/

class Solution {
public:
    //it will check whether string is palindrom with given range
    string getPalindrom(string str,int left,int right){
        
        int n = str.length();
        
        while(left >= 0 && right < n){
            if(str[left] != str[right])
                break;
            
            left--;
            right++;
        }
        
        return str.substr(left+1,right-left-1);
    }
    
    string longestPalindrome(string s) {
        
        //t.c = O(n^2) s.c = O(1)
        
        if(s.empty())
            return 0;
        
        string ans = "";
        int n = s.size();
        
        //odd palindrom string
        for(int i=0;i<n;i++){
            string odd = getPalindrom(s,i,i);
            if(odd.length() > ans.length())
                ans = odd;
        }
        
        //even palindrom string
        for(int i=0;i<n;i++){
            string even = getPalindrom(s,i,i+1);
            if(even.length() > ans.length())
                ans = even;
        }
        return ans;
    }
};



//         t.c=O(n^3)
//         int n = s.size();
//         int st = 0,maxLength = 1;
        
//         for(int i=0; i<n; i++){
            
//             for(int j=i; j<n; j++){
//                 int flag = 1;
                
//                 //check palindrom
//                 for(int k=0; k<(j-i+1)/2; k++){
//                     if(s[i+k] != s[j-k])
//                         flag = 0;
//                 }
                
//                 //if palindrom 
//                if(flag && (j-i+1) > maxLength){
//                    st = i;
//                    maxLength = (j-i+1);
//                }
//             }
//         }
//         return s.substr(st,(st+maxLength));
     
