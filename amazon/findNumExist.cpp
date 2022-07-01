/*
given a array of positive and negative Integer and a target X . 
find whether two number exist in the array whose sum will be equal to target
*/


#include<bits/stdc++.h>
using namespace std;

int findNumExist(vector<int> arr,int target)
{
    sort(arr.begin(),arr.end());
    int i=0,j=arr.size()-1;
    while(i<=j){
        if(arr[i]+arr[j]==target)
           return 1;
        else if(arr[i]+arr[j]<target)
           i++;
        else
           j--;
    }
    return 0;
}
int main()
{
    cout<<"enter size of array : ";
    int n;
    cin>>n;
    vector<int> arr;
    cout<<"enter array elements "<<endl;
    for(int i=0;i<n;i++){
       int a;
       cin>>a;
       arr.push_back(a);
    }
    int k;
    cout<<"enter target : ";
    cin>>k;
    cout<<findNumExist(arr,k);
    return 0;
}

/*
output:---
enter array elements 
-1 -10 6 1 2
enter target : 5
1


enter size of array : 5
enter array elements
-1 -10 2 1 6
enter target : 16
0
/*
