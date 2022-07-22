/*
Minimum Increment / decrement to make array elements equal
Given an array of integers where 1 \leq A[i] \leq 10^{18} .
In one operation you can either Increment/Decrement any element by 1.
The task is to find the minimum operations needed to be performed on the array elements to make all array elements equal.
*/

/*
Input : A[] = { 1, 5, 7, 10 }
Output : 11
Increment 1 by 4, 5 by 0.
Decrement 7 by 2, 10 by 5.
New array A = { 5, 5, 5, 5 } with 
cost of operations = 4 + 0 + 2 + 5 = 11.

Input : A = { 10, 2, 20 }
Output : 18
*/

#include <bits/stdc++.h>
using namespace std;

int minCost(int a[], int n)
{
    // sort the array
    sort(a, a + n);

    int cost = 0;

    // find middle element
    int mid = a[n / 2];

    // calculate total cost
    for (int i = 0; i < n; i++)
    {
        cost += abs(a[i] - mid);
    }

    // if size is even
    if (n % 2 == 0)
    {
        int tCost = 0;
        // find middle element
        int tMid = a[(n / 2) - 1];
        // calculate cost
        for (int i = 0; i < n; i++)
        {
            tCost += abs(a[i] - tMid);
        }
        // find minimum cost
        cost = min(cost, tCost);
    }

    // return minimum cost
    return cost;
}

int main()
{

    int A[] = {10, 2, 20};
    //int A[] = {1, 5, 7, 10 };

    int n = sizeof(A) / sizeof(A[0]);

    cout << minCost(A, n);

    return 0;
}
