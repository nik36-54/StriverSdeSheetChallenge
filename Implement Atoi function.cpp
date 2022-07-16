int atoi(string str) {
    bool flag=false;
    if(str[0]=='-')
        flag=true;
    int ans=0;
    
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        int x=str[i]-'0';
        if(x>=0 && x<=9)
            ans=ans*10+x;
    }
    
    if(flag)return (-1)*ans;
    return ans;
    
}