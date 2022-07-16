#include<bits/stdc++.h>
int getMedian(vector<vector<int>> &mat)
{
    int n=mat.size(),m=mat[0].size();
    
//     vector<int> b;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             b.push_back(mat[i][j]);
//         }
//     }
//     sort(b.begin(),b.end());
//     int len=b.size();
//     return b[len/2];
    int total=(n*m)/2;
    int mn=INT_MAX,mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(mat[i][0]<mn)
            mn=mat[i][0];
        if(mat[i][m-1]>mx)
            mx=mat[i][m-1];
    }
    while(mn<mx)
    {
        int cnt=0;
        int mid=(mn+mx)/2;
        for(int i=0;i<n;i++)
            cnt+=upper_bound(mat[i].begin(),mat[i].end(),mid)-mat[i].begin();
        if(cnt<=total)
            mn=mid+1;
        else if()
            mx=mid-1;
    }
    return mn;
    
}