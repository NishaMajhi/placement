/*
We have n chips, where the position of the ith chip is position[i].

We need to move all the chips to the same position. In one step, we can change the position of the ith chip from position[i] to:

position[i] + 2 or position[i] - 2 with cost = 0.
position[i] + 1 or position[i] - 1 with cost = 1.
Return the minimum cost needed to move all the chips to the same position.

 
Example 1:

Input: position = [1,2,3]
Output: 1

Explanation: First step: Move the chip at position 3 to position 1 with cost = 0.
Second step: Move the chip at position 2 to position 1 with cost = 1.
Total cost is 1.


Example 2:

Input: position = [2,2,2,3,3]
Output: 2

Explanation: We can move the two chips at position  3 to position 2. Each move has cost = 1. The total cost = 2.


Example 3:

Input: position = [1,1000000000]
Output: 1
 

Constraints:

1 <= position.length <= 100
1 <= position[i] <= 10^9
*/

class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
   /*
     As the cost of moving 2 steps is 0, we move all the odd positioned chips to a single odd position and all even
      positioned chips to single even position in 0 cost. Now we have to move whichever is minimum of them by 1 unit
        and then they eventually be converted to same numbers ( odd or even ).
   */     
        
        int odd=0,even=0;
        for(int i=0;i<position.size();i++){
            if(position[i]%2 == 0)
                even++;
            else
                odd++;
        }
        return min(even,odd);
    }
};
