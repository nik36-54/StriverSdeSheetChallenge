bool subsetSumToK(int n, int sum, vector<int> &arr) {
    bool dp[n + 1][sum + 1];
  
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
  
    for (int i = 1; i <= sum; i++)
        dp[0][i] = false;
  
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (j < arr[i - 1])
                dp[i][j] = dp[i - 1][j];
            if (j >= arr[i - 1])
                dp[i][j] = dp[i - 1][j]
                               || dp[i - 1][j - arr[i - 1]];
        }
    }

    return dp[n][sum];
}