/*
Problem Description : You are given two positive numbers A and B. You need to find the maximum valued integer X such that:

X divides A i.e. A % X = 0
X and B are co-prime i.e. gcd(X, B) = 1
For example,

A = 30
B = 12
We return
X = 5


Problem Constraints
1<=A,B<=1e9


Input Format
First argument is A.
Second argument is B.


Output Format
Find the maximum valued integer X which satisfies the above properties.


*/

int Solution::cpFact(int A, int B) {
    
    //euclid gcd algorithm
    while( __gcd(A,B) != 1){
        A = A / (__gcd(A,B));
    }
    return A;
}
