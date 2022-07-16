/*
Given an array of positive integers arr (not necessarily distinct), return the lexicographically largest permutation that is smaller than arr,
that can be made with exactly one swap (A swap exchanges the positions of two numbers arr[i] and arr[j]). If it cannot be done, then return the same array.

 
Example 1:

Input: arr = [3,2,1]
Output: [3,1,2]

Explanation: Swapping 2 and 1.


Example 2:

Input: arr = [1,1,5]
Output: [1,1,5]

Explanation: This is already the smallest permutation.


Example 3:

Input: arr = [1,9,4,6,7]
Output: [1,7,4,6,9]

Explanation: Swapping 9 and 7.
 

Constraints:

1 <= arr.length <= 104
1 <= arr[i] <= 104
*/


class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
     
        int n=arr.size(),i,j;
		// find the greater element from that adjacent element from the last
		for(i=n-2;i>=0;i--)
		{
			if(arr[i]>arr[i+1])break;
		}
		// if doesn't find element from the last that means arr is already sorted
		if(i<0)return arr;
		// find the smaller element from the last and swap them
		for(j=n-1;j>=1;j--)
		{
			if(arr[j] < arr[i] && arr[j]!=arr[j-1])break;
		}
		swap(arr[i],arr[j]);
		return arr;
     
       
    }
};
