#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &arr, int n)
{
    int i=n-2;
    while(i>=0 && arr[i+1]<=arr[i])
        i--;
    int j=n-1;
    if(i>=0)
    {
        while(arr[j]<=arr[i])
            j--;
        swap(arr[i],arr[j]);
    }
    int low=i+1,high=n-1;
    while(low<=high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    return arr;
}

//O(N) time .....O(1) Space