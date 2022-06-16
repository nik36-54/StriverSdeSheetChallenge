#include <bits/stdc++.h> 
int maximumProfit(vector<int> &arr){
    int n=arr.size();
    int mn=arr[0];
    int ans=arr[1]-arr[0];
    int curr=0;
    
    for(int j=1;j<n;j++) {
        curr = arr[j]-mn;
        mn = min(mn, arr[j]);
        ans = max(ans, curr);
    }
    
    if(ans<=0) return 0;
    return ans;
}

// O(n) time ...O(1) space