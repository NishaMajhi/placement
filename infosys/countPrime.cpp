/*
Given an integer n, return the number of prime numbers that are strictly less than n.

Example 1:
Input: n = 10
Output: 4

Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.


Example 2:
Input: n = 0
Output: 0


Example 3:
Input: n = 1
Output: 0
 

Constraints:

0 <= n <= 5 * 106
*/


class Solution {
public:
    
//     int isPrime(int x){
//         if(x == 2 || x == 3)
//             return 1;
//         int c=0;
//         for(int i=2;i<=x/2;i++){
//             if(x%i==0){
//                 c++;
//             }
//         }
        
//         if(c>0)
//             return 0;
//         return 1;
//     }
    
    int countPrimes(int n) {
        
        // if(n==0 || n==1)
        //     return 0;
        
//         int primeCount=0;
//         for(int i=2;i<n;i++){
//             if(isPrime(i))
//                 primeCount++;
//         }
//         return primeCount;
        
        
        
        if(n==0 || n==1 || n==2)
            return 0;
        
        
        vector<int> vec(n+1,0);
        for(int i=2;i*i<n;i++){
            
            if(vec[i] == 1)
                continue;
            
            int j=i+i;
            
            while(j<n){
                vec[j]=1;
                j = j+i;
            }
        }
        
        int count=0;
        for(int i=2;i<n;i++){
            if(vec[i]==0)
                count++;
        }
        
        return count;
            
    }
};
