#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int i=0,j=0;
    int prev,curr;
    
    while(i<n && j<m)
    {
        if(i+1==n || j+1==m)
            break;
        
        prev=mat[i+1][j];
        
        for(int u=j;u<m;u++)
        {
            curr=mat[i][u];
            mat[i][u]=prev;
            prev=curr;
        }
        i++;
        
        for(int u=i;u<n;u++)
        {
            curr=mat[u][m-1];
            mat[u][m-1]=prev;
            prev=curr;
        }
        m--;
        
        if(i<n)
        {
            for (int u = m-1; u >= j; u--)
            {
                curr = mat[n-1][u];
                mat[n-1][u] = prev;
                prev = curr;
            }
            n--;
        }
        
        if(j<m)
        {
            for (int u = n-1; u >= i; u--)
            {
                curr = mat[u][j];
                mat[u][j] = prev;
                prev = curr;
            }
            j++;
        }
    }

}