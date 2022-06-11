#include<bits/stdc++.h>
string reverseString(string str)
{
    string s;
    stringstream ss(str);
    string temp;
    vector<string> ans;
    while(ss>>temp)
        ans.push_back(temp);
    
    for (int i = ans.size() - 1; i >= 0; --i) {
            if (i != ans.size() - 1) s += " ";
               s+=ans[i];
        }
    return s;
}

// O(n) time ....O(n) space

