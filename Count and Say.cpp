string writeAsYouSpeak(int n) 
{
    vector<string> dp(n+3);
    dp[0]="";
    dp[1]="1";
    dp[2]="11";
    if(n<=2)
       return dp[n];
    for(int i=3;i<=n;i++)
    {
        string temp;
        string s=dp[i-1];
        int m=s.length();
        int k=0,j=0;
        while(k<m)
        {
            int cnt=0;
            while(j<m && s[k]==s[j])
            {
                cnt++;
                j++;
            }
            string a=to_string(cnt);
            temp+=a;
            temp+=s[k];
            k=j;
        }
        dp[i]=temp;
    }
    return dp[n];
}