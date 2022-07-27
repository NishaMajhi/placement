/*
You are given a list of songs where the ith song has a duration of time[i] seconds.

Return the number of pairs of songs for which their total duration in seconds is divisible by 60. Formally,
we want the number of indices i, j such that i < j with (time[i] + time[j]) % 60 == 0.

 
Example 1:

Input: time = [30,20,150,100,40]
Output: 3

Explanation: Three pairs have a total duration divisible by 60:
(time[0] = 30, time[2] = 150): total duration 180
(time[1] = 20, time[3] = 100): total duration 120
(time[1] = 20, time[4] = 40): total duration 60


Example 2:

Input: time = [60,60,60]
Output: 3

Explanation: All three pairs have a total duration of 120, which is divisible by 60.
 

Constraints:

1 <= time.length <= 6 * 104
1 <= time[i] <= 500
*/


class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        
        //t.c = O(n^2)
//         int count = 0;
//         for(int i = 0; i < time.size(); i++){
//             for(int j = i+1; j < time.size(); j++){
//                 if( (time[i] + time[j])%60 == 0){
//                     count++;
//                 }
//             }
//         }
        
//         return count;
        
        
        int count = 0;
        for(int i=0;i<time.size();i++){
            time[i] = time[i]%60;
        }
            
        //to store the frequency of times 
        unordered_map<int,int>mp;
        for(int i=0;i<time.size();i++){
            
            if(mp.find((60 - time[i])%60) != mp.end()){
                count += mp[(60 - time[i])%60];
                
            }
            //time at i to insert karna hai with frequency
            mp[(time[i]%60)]++;
        }
        
        return count;
    }
};
