#include <bits/stdc++.h>
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    vector<int> freq[n + 1];
    for (auto x : mp)
        freq[x.second].push_back(x.first);
    vector<int> ans;
    int cnt = 0;
    for (int i = n; i >= 0; i--)
    {
        for (int x : freq[i])
        {
            ans.push_back(x);
            cnt++;
            if (cnt == k)
            {
                sort(ans.begin(), ans.end());
                return ans;
            }
        }
    }

    return ans;
}