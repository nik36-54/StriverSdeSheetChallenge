#include <bits/stdc++.h>
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    vector<vector<int>> ans;
    vector<string> list;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < (1 << n); i++)
    {
        vector<int> subset;
        string temp = "";
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                subset.push_back(arr[j]);
                temp += to_string(arr[j]) + '#';
            }
        }

        if (find(list.begin(), list.end(), temp) == list.end())
        {
            ans.push_back(subset);
            list.push_back(temp);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}