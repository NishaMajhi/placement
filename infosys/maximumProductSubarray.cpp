/*
Given an integer array nums, find a contiguous non-empty subarray within the array that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

A subarray is a contiguous subsequence of the array.

 
Example 1:

Input: nums = [2,3,-2,4]
Output: 6

Explanation: [2,3] has the largest product 6.


Example 2:

Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
 

Constraints:

1 <= nums.length <= 2 * 104
-10 <= nums[i] <= 10
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
     
        int maxProd = nums[0];
        int minProd = nums[0];
        int result = nums[0];
        
        int n=nums.size(); 
    
        for(int i=1;i<n;i++) {
            if(nums[i]<0){
                //it will tell the new start
                swap(maxProd,minProd);
            }
            maxProd = max((maxProd*nums[i]),nums[i]);
            minProd = min((minProd*nums[i]),nums[i]);
        
        result = max(result,maxProd);
       }
    
    return result; 
        
        //t.c = O(n^2)
//         int n = nums.size();
//         int prod1 = 1,maxProd = INT_MIN;
//         for(int i=0;i<n;i++){
//             for(int j=i;j<n;j++){
//                if(i==j){
//                    prod1 = nums[i];
//                 }
//                 else{
//                     prod1 *= nums[j];
//                 }
                
//                 if(prod1 > maxProd)
//                     maxProd = prod1;
//             }
//         }
//         return maxProd;
    }
};
