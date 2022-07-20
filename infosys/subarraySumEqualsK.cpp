/*
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2


Example 2:

Input: nums = [1,2,3], k = 3
Output: 2
 

Constraints:

1 <= nums.length <= 2 * 104
-1000 <= nums[i] <= 1000
-107 <= k <= 107
*/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     
        //create a unorder map to store the sum with their position
       unordered_map<int,int> mp;
        
        //currsum for storing the sum from start to till
        //count keep counting of pairs
       int currSum = 0,count = 0;
        
        //insert 0 in map with position 1
       mp[currSum]=1;
        
        //traverse the vector
       for(int i=0;i<nums.size();i++){
           
           //calculate sum from begining index to till index
           currSum += nums[i];
           
           //find current sum - actual sum(k)
           int f = currSum - k;
           
           // if the remaing element found in the map than increase count by map value
           if(mp.find(f) != mp.end()){
               count += mp[f];
           }
           
           //insert current sum in the map with position
           mp[currSum]++;
       }
        
        //return count of pairs
       return count;   
    }
};
