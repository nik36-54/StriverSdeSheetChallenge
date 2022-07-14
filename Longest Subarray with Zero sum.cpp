#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector<int> arr) {
    int n=arr.size(),k=0;

    // O(n^2)  time
//     for(int i=0;i<n;i++)
//     {
//         int sum=0;
//         for(int j=i;j<n;j++)
//         {
//             sum+=arr[j];
//             if(sum==0)
//                 ans=max(ans,j-i+1);
//         }
//     }
//     return ans;
    int sum=0,ans=0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==k)
            ans=i+1;
        if(mp.find(sum)==mp.end())
            mp[sum]=i;
        if(mp.find(sum-k)!=mp.end())
            ans=max(ans,i-mp[sum]);
    }
    return ans;

    // O(n) time ...O(n) space
}