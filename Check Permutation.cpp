bool areAnagram(string &s1, string &s2){
    int n=s1.length(),m=s2.length();
    if(n!=m)
        return false;
    vector<int> cnt(26,0);
    for(int i=0;i<n;i++)
    {
        cnt[s1[i]-'a']++;
        cnt[s2[i]-'a']--;
    }
    for(auto x:cnt)
        if(x!=0)
            return false;
    
    return true;
}

// O(n) time .O(n) space