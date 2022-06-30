// Try to solve in these order
// 1. Recursive
// 2. Memoization
// 3. Tabulation
// 4. Combinatorics

#include <bits/stdc++.h> 

int f(int i,int j,vector<vector<int>>& dp)
    {
        //Base Cond
        if(i==0 && j==0)
            return 1;
        if(i<0 || j<0)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
    
        //Choice 
        int up=f(i-1,j,dp);
        int left=f(i,j-1,dp);
    
        //total no. of ways
        return dp[i][j]=up+left;
    }

int uniquePaths(int m, int n) {
    vector<vector<int>> dp(m,vector<int>(n,-1));
	return f(m-1,n-1,dp);
}