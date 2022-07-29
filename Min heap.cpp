#include <bits/stdc++.h>
priority_queue<int, vector<int>, greater<int>> pq;

void remove(vector<int> &ans)
{
    ans.push_back(pq.top());
    pq.pop();
}

void insert(int x)
{
    pq.push(x);
}

vector<int> minHeap(int n, vector<vector<int>> &q)
{
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (q[i][0] == 0)
            insert(q[i][1]);
        else if (q[i][0] == 1)
            remove(ans);
    }
    while (!pq.empty())
        pq.pop();
    return ans;
}
