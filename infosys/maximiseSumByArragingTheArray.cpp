/*
Maximize the sum of arr[i]*i

Given an array of N integers. You are allowed to rearrange the elements of the array. The task is to find the maximum value of
 Σarr[i]*i, where i = 0, 1, 2,…., n – 1.

Examples:

Input : N = 4, arr[] = { 3, 5, 6, 1 }
Output : 31
If we arrange arr[] as { 1, 3, 5, 6 }.
Sum of arr[i]*i is 1*0 + 3*1 + 5*2 + 6*3
= 31, which is maximum

Input : N = 2, arr[] = { 19, 20 }
Output : 20
*/

#include <bits/stdc++.h>
using namespace std;

int maximiseSum(vector<int> v, int n)
{

    sort(v.begin(), v.end());
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (v[i] * i);
    }

    return sum;
}

int main()
{
    vector<int> v;
    v={3,5,6,1};
    // int n;
    // cout << "enter array size: ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int d;
    //     cin >> d;
    //     v[i] = d;
    // }

    cout << maximiseSum(v,4) << endl;
}