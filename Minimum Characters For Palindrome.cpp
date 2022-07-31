#include <bits/stdc++.h>
void computeLps(string pat, int m, int *lps)
{
    int len = 0;
    lps[0] = 0;
    int i = 1;

    while (i < m)
    {
        if (pat[i] == pat[len])
        {
            lps[i] = len + 1;
            len++;
            i++;
        }
        else
        {
            if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
            else
            {
                len = lps[len - 1];
            }
        }
    }
}

int minCharsforPalindrome(string str)
{
    int n = str.length();
    string temp = str;
    reverse(str.begin(), str.end());

    string s = temp + '$' + str;
    int lps[2 * n + 1];
    computeLps(s, 2 * n + 1, lps);

    return n - lps[2 * n];
}
