#include<bits/stdc++.h>
const int mod=1e9;

int floydWarshall(int n, int m, int src, int des, vector<vector<int>> &edges) {
    
    vector<vector<long long>> dis(n+1,vector<long long>(n+1,mod));
    for(int i=0;i<m;i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];
        dis[u][v]=edges[i][2];
    }
    
    int i=1;
    while(i<=n)
    {
        dis[i][i]=0;
        i++;
    }
    
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(dis[i][k] == mod || dis[k][j] == mod) 
                        continue;
                dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
            }
        }
    }
    return dis[src][des];
}