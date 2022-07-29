#include <bits/stdc++.h>
vector<int> nextGreater(vector<int> &arr, int n)
{
    stack<int> st;
    st.push(arr[n - 1]);
    vector<int> ans;
    ans.push_back(-1);

    for (int i = n - 2; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i])
            st.pop();
        int x = st.empty() ? -1 : st.top();
        ans.push_back(x);
        st.push(arr[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}