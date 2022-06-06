#include<bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector<int> ans;
    stack<int> st;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && st.top()>=arr[i])
            st.pop();
        int x=st.empty()?-1:st.top();
        ans.push_back(x);
        st.push(arr[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

// O(N) time.