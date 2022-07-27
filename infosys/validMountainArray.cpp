/*
Given an array of integers arr, return true if and only if it is a valid mountain array.

Recall that arr is a mountain array if and only if:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

 

Example 1:

Input: arr = [2,1]
Output: false


Example 2:

Input: arr = [3,5,5]
Output: false


Example 3:

Input: arr = [0,3,2,1]
Output: true
 

Constraints:

1 <= arr.length <= 104
0 <= arr[i] <= 104
*/

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        if(arr.size() < 3)
            return false;
        
        
        int ind1 = -1,mini = arr[0];
        
        //keep count of increment and decrement
        int inc = 0,dec = 0;
        
        for(int i=1; i<arr.size(); i++){
            
            //if arr[i] == arr[i+1] return false
            if(arr[i] == mini)
                return false;
            
            //if we found peek (arr[i] > arr[i+1])
            if(arr[i] < mini){
               ind1 = i;
                break;
            }
             //arr[i] < arr[i+1]
            else if(arr[i] > mini){
                mini = arr[i];
                inc++;
           }
        }
        
        if(ind1 != -1){
           for(int i = ind1; i<arr.size(); i++){
               
               //if we found another peek or arr[i] == arr[i+1]
               if(arr[i] >= mini)
                    return false;
               
               //arr[i] > arr[i+1]
               else if(arr[i] < mini){
                    mini = arr[i];
                    dec++;
                }
           }
        }
        //if the number is only increasing or decreasing
        if(inc == 0 || dec == 0)
            return false;
        
        return true;
    }
};

 
