#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// O(n) time ....O(n) space
    // vector<int> ans(m+n,0);
    // int i=0,j=0,k=0;
    // while(i<m && j<n)
    // {
    //     if(arr1[i]<=arr2[j])
    //     {
    //         ans[k++]=arr1[i++];
    //     }
    //     else
    //         ans[k++]=arr2[j++];
    // }
    // while(i<m)
    // {
    //     ans[k++]=arr1[i++];
    // }
    // while(j<n)
    //     ans[k++]=arr2[j++];
    
    // return ans;

    // O(n+m) time O(1) space 
    int i=m-1,j=n-1,k=m+n-1;
    while(j>=0)
    {
        if(i>=0 && arr1[i]>arr2[j])
            arr1[k]=arr1[i--];
        else
            arr1[k]=arr2[j--];
        
        k--;
    }
    return arr1;
}

