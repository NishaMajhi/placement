/*
Prime Sum

Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.

NOTE A solution will always exist. read Goldbach’s  conjecture

Example:

Input : 4
Output: 2 + 2 = 4

If there are more than one solutions possible, return the lexicographically smaller solution.

If [a, b] is one solution with a <= b,
and [c,d] is another solution with c <= d, then

[a, b] < [c, d] 

If a < c OR a==c AND b < d. 
*/

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}


vector<int> Solution::primesum(int A) {
    
    vector<int> ans;
    for(int i=2;i<A;i++){
        if(isPrime(i)){
            int x = A - i;
            if(isPrime(x)){
                ans.push_back(i);
                ans.push_back(x);
                break;
            }
        }
    }
    
    return ans;
}
