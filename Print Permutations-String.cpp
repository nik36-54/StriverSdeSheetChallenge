#include<bits/stdc++.h>
void permute(string s,int l,int r,vector<string>& ans)
{
    if(l==r)
    {
        ans.push_back(s);
        return;
    }
    for(int i=l;i<=r;i++)
    {
        swap(s[i],s[l]);
        permute(s,l+1,r,ans);
        swap(s[i],s[l]);
    }
}

vector<string> findPermutations(string &s) {
    vector<string> ans;
    int n=s.length();
    permute(s,0,n-1,ans);
    return ans;
}