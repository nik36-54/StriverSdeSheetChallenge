#include<bits/stdc++.h>
vector<vector<int>> adj;

void bfs(int s,int n,vector<int>& ans,vector<int>& vis)
{
    queue<int> q;
    vis[s]=true;
    q.push(s);
    while(!q.empty())
    {
        int x=q.front();
        ans.push_back(x);
        q.pop();
        for(auto u:adj[x])
        {
            if(!vis[u])
            {
                q.push(u);
                vis[u]=true;
            }
        }
    }
    return;
}

vector<int> BFS(int n, vector<pair<int, int>> edges)
{
    adj.resize(n);
    for(auto x:edges)
    {
        int u=x.first;
        int v=x.second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    for(int i=0;i<n;i++){
        sort(adj[i].begin(),adj[i].end());
    }
    
    vector<int> ans,vis(n,false);
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
            bfs(i,n,ans,vis);
    }
    
    return ans;
    
}