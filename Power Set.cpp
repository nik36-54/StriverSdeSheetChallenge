#include<bits/stdc++.h>
vector<vector<int>> pwset(vector<int>& arr)
{
    vector<vector<int>> ans;
    int n=arr.size();
    
    for(int i=0;i<(1<<n);i++)
    {
        vector<int> v;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
                v.push_back(arr[j]);
        }
//         sort(v.begin(),v.end());
        ans.push_back(v);
    }
    return ans;
}

// O(n*2^n) time