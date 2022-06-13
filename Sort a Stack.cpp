#include<bits/stdc++.h>

void insert(stack<int>& st,int x)
{
    if(st.size()==0 || st.top()<=x)
    {
        st.push(x);
        return;
    }
    int val=st.top();
    st.pop();
    insert(st,x);
    st.push(val);
    return;
}

void sortStack(stack<int> &st)
{
	if(st.size()==1)
        return;
    int x=st.top();
    st.pop();
    sortStack(st);
    insert(st,x);
    return;
}

// O(N^2) time .......O(N) space