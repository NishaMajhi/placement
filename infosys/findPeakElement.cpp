/*
A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index.
If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always 
considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in O(log n) time.

 
Example 1:

Input: nums = [1,2,3,1]
Output: 2

Explanation: 3 is a peak element and your function should return the index number 2.


Example 2:

Input: nums = [1,2,1,3,5,6,4]
Output: 5

Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.
 

Constraints:

1 <= nums.length <= 1000
-231 <= nums[i] <= 231 - 1
nums[i] != nums[i + 1] for all valid i.
*/



class Solution {
public:
    int findPeakElement(vector<int>& nums) {
     
        //t.c = O(n)
          // int n = nums.size();
          // if(n == 1)
          //    return 0;
          // if(n == 2){
          //     if(nums[1] > nums[0])
          //         return 1;
          //      else
          //         return 0;
          //   }
//         int ind1 = -1,ind2 = -1;
//         for(int i=1;i<nums.size()-1;i++){
//             if((nums[i] > nums[i-1]) && (nums[i] > nums[i+1]))
//                 ind1 = i;
            
//             if(ind1 > ind2)
//                 ind2 = ind1;
//         }
//         return ind2;
        
       
        
        //t.c = O(logn)
        int n = nums.size();
        if(n == 1)
            return 0;
        if(n == 2){
            if(nums[1] > nums[0])
                return 1;
            else
                return 0;
        }
        
        int lo = 0;
        int hi = n-1;
        int mid = -1;
        while (lo <= hi) {
            
            mid = lo + (hi - lo)/2;
            if ( (nums[mid] > (mid - 1 >= 0 ? nums[mid - 1] : INT_MIN) ) &&
                ( nums[mid] > (mid + 1 <= n - 1 ? nums[mid + 1] : INT_MIN ) ) )
                   return mid;
                
            else if (nums[mid] < (mid - 1 >= 0 ? nums[mid - 1] : INT_MIN))
                 hi = mid - 1;
            else
                lo = mid + 1;
        }
                
        return mid;
        
    }
};
