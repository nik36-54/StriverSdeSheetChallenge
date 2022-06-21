#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    sort(arr.begin(),arr.end());
    vector<int> v;
    int ans=1,cnt=1;
    v.push_back(arr[0]);
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
            v.push_back(arr[i]);
    }
        
    int m=v.size(); 
       
    for(int i=1;i<m;i++)
    {
        if(v[i]==v[i-1]+1)
        {
            cnt++;
            ans=max(ans,cnt);
        }
        else
            cnt=1;
    }
    
    return ans;
}