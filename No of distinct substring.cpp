#include <bits/stdc++.h>
int distinctSubstring(string &word)
{
    unordered_set<string> s;

    for (int i = 0; i < word.length(); ++i)
    {
        string ss = "";
        for (int j = i; j < word.length(); ++j)
        {
            ss = ss + word[j];
            s.insert(ss);
        }
    }

    return s.size();
}
