/*
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
 

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]


Example 2:

Input: numRows = 1
Output: [[1]]
 

Constraints:

1 <= numRows <= 30
*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        int n = numRows;
        
        //resultant vector
        vector<vector<int > > ans;
        
        for(int i=0; i<n; i++){
            
            //create temporary vector for each row
                vector<int> t(i+1,1);
            
                for(int j=1; j<i; j++){
                    
                    //add data of previous above rows data
                   t[j] = ans[i-1][j-1] + ans[i-1][j]; 
                }                
            ans.push_back(t);
        }
        
        return ans;
    }
};
