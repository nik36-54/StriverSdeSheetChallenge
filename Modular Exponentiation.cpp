int modularExponentiation(int x, int n, int m) {
	if(x==0)return 0;
    if(x==1)return 1%m;
    int ans=1;
    while(n>0)
    {
        if(n&1)
        ans=(1LL*ans*(x%m))%m;
        
        n=n>>1;
        x=(1LL*(x%m)*(x%m))%m;
    }
    return ans;
}

// O(logN) time ...O(1) space