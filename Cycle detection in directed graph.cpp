#include <bits/stdc++.h>

bool dfs(int s, vector<vector<int>> &adj, vector<int> &vis, vector<int> &dfsvis)
{
    vis[s] = 1;
    dfsvis[s] = 1;

    for (auto u : adj[s])
    {
        if (!vis[u])
        {
            if (dfs(u, adj, vis, dfsvis))
                return true;
        }
        else if (dfsvis[u])
            return true;
    }
    dfsvis[s] = 0;
    return false;
}

int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
{
    vector<vector<int>> adj(n + 1);
    int m = edges.size();
    for (int i = 0; i < m; i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        //         adj[v].push_back(u);
    }

    vector<int> vis(n + 1, 0), dfsvis(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
            if (dfs(i, adj, vis, dfsvis))
                return 1;
    }
    return 0;
}