/*
given one direction array with positive and negative integers.
write a program to find sum of contiguous subarray with the given array which has the largest sum
*/

#include <bits/stdc++.h>
using namespace std;

int findLargeSum(vector<int> vec)
{
    int sum = 0, maxSum = INT_MIN;
    for (int i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
        if (maxSum < sum)
            maxSum = sum;
        if (sum < 0)
            sum = 0;
    }

    return maxSum;
}

int main()
{
    cout << "enter size of array : ";
    int n;
    cin >> n;
    vector<int> arr;
    cout << "enter array elements " << endl;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    cout << "largest sum : " << findLargeSum(arr);
    return 0;
}

/*
output--
enter size of array : 4
enter array elements 
-10 -1 6 2
largest sum : 8
*/
