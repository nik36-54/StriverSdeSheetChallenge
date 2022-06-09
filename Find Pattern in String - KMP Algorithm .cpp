bool findPattern(string p, string s)
{
    int n=s.length(),m=p.length();
    for(int i=0;i<=n-m;i++)
    {
        int j;
        for(j=0;j<m;j++)
            if(s[i+j]!=p[j])
                break;
        if(j==m)
            return true;
    }
    return false;
}

// O(n*m) time ...O(1) space........TLE 
// think KMP OR Z ALGORITHM OR RABIN KARP