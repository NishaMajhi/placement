/*
You are given a 2D array of integers envelopes where envelopes[i] = [wi, hi] represents the width and the height of an envelope.

One envelope can fit into another if and only if both the width and height of one envelope are greater than the other envelope's width and height.

Return the maximum number of envelopes you can Russian doll (i.e., put one inside the other).

Note: You cannot rotate an envelope.


Example 1:

Input: envelopes = [[5,4],[6,4],[6,7],[2,3]]
Output: 3

Explanation: The maximum number of envelopes you can Russian doll is 3 ([2,3] => [5,4] => [6,7]).


Example 2:

Input: envelopes = [[1,1],[1,1],[1,1]]
Output: 1
 

Constraints:

1 <= envelopes.length <= 105
envelopes[i].length == 2
1 <= wi, hi <= 105
*/


class Solution {
public:
    
    static bool comp(vector<int> &a,vector<int> &b){
        //if wieght is same then send highest height
        if(a[0] == b[0])
            return a[1] > b[1];
        
        //otherwise send lowest weight
        return a[0] < b[0];
               
    }
    
    
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        
        int n = envelopes.size();
        
        //sort the vector according to weights value
        sort(envelopes.begin(),envelopes.end(),comp);
        
        //create a temporay vector
        vector<int> temp;
        
        //push initial height in temporary vector
        temp.push_back(envelopes[0][1]);
        
        //traverse the entire array
        for(int i=1;i<n;i++){
            
            //get height
            int val = envelopes[i][1];
            
            //compare the previos height with current height
            if(val > temp.back()){
                temp.push_back(val);
            }
            
            //else find position for current height in temporary vector
            else{
                int idx = lower_bound(temp.begin(),temp.end(),val) - temp.begin();
                temp[idx] = val;
            }
        }
        
        //return answer 
        return temp.size();
    }
};
