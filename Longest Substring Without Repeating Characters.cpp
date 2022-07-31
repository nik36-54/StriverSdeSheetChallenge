#include <bits/stdc++.h>
#define CHAR 128
int uniqueSubstrings(string s)
{
    int n = s.length();
    int start = 0, end = 0;
    vector<bool> window(CHAR);

    for (int i = 0, j = 0; j < n; j++)
    {
        if (window[s[j]])
        {
            while (s[i] != s[j])
                window[s[i++]] = false;
            i++;
        }
        else
        {
            window[s[j]] = true;
            if (end - start < j - i)
            {
                end = j;
                start = i;
            }
        }
    }
    return end - start + 1;
}