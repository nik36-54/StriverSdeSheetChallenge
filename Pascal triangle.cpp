#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> ans;
    vector<long long int> a,b;
    
    a.push_back(1);
    ans.push_back(a);
    if(n==1)return ans;
    
    b.push_back(1);
    b.push_back(1);
    ans.push_back(b);
    if(n==2)
    return ans;
    
    for(int i=2;i<n;i++)
    {
        vector<long long int> v;
        v.push_back(1);
        for(int j=1;j<=i-1;j++)
        {
            long long int x=ans[i-1][j]+ans[i-1][j-1];
            v.push_back(x);
        }
        v.push_back(1);
        ans.push_back(v);
    }
    return ans;
    
}

// O(N^2) time ... O(N^2) space.