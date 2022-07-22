/*
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

Example 1:

Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49

Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case,
the max area of water (blue section) the container can contain is 49.


Example 2:

Input: height = [1,1]
Output: 1
 

Constraints:

n == height.length
2 <= n <= 105
0 <= height[i] <= 104

*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        //take two pinters two traverse the Height array
        int left = 0;
        int right = height.size()-1;
        
        //maxWater for storing maximum water
        int maxWater = INT_MIN;
        
        //currWatet to store current water at each time
        int currWater = 0;
        
        while(left < right){
            //calculate minimum height from height of left and right
            int minHeight = min(height[left],height[right]);
            //calculate current water by multipling minimum height with distance of left and                   right
            currWater = (right - left) * minHeight;
            //assign max water
            if(maxWater < currWater)
                maxWater = currWater;
            
            //shift pointer whose height is less
            if(height[left] < height[right])
                left++;
            else
                right--;
        }
        
        //return maximum water
        return maxWater;
    }
};
