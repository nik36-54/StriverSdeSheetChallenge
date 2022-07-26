#include <bits/stdc++.h>
void dfs(int s, vector<vector<int>> &adj, vector<bool> &vis, vector<int> &temp)
{
    vis[s] = true;
    temp.push_back(s);

    for (auto u : adj[s])
    {
        if (!vis[u])
            dfs(u, adj, vis, temp);
    }
    return;
}

vector<vector<int>> depthFirstSearch(int n, int m, vector<vector<int>> &edges)
{
    vector<vector<int>> adj(n), ans;
    for (auto it : edges)
    {
        int u = it[0];
        int v = it[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> vis(n);

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            vector<int> temp;
            dfs(i, adj, vis, temp);
            ans.push_back(temp);
        }
    }
    return ans;
}