#include<bits/stdc++.h>

void dfs(int s,vector<bool>& vis,stack<int>& st,vector<int> adj[])
{
    vis[s]=true;
    for(int u:adj[s])
    {
        if(!vis[u])
        dfs(u,vis,st,adj);
    }
    st.push(s);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int n, int m)  
{
    vector<int> adj[n];
    for(int i=0;i<m;i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
    }
    
    vector<bool> vis(n,false);
    stack<int> st;
    
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
            dfs(i,vis,st,adj);
    }
    
    vector<int> ans;
    while(!st.empty())
    {
        int x=st.top();
        ans.push_back(x);
        st.pop();
    }
    return ans;
}