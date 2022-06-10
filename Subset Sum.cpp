vector<int> subsetSum(vector<int> &arr)
{
    int n=arr.size();
    vector<int> ans;
    for(int i=0;i<(1<<n);i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
                sum+=arr[j];
        }
        ans.push_back(sum);
    }
    sort(ans.begin(),ans.end());
    return ans;
}

// O((2^N)*N) time... O(1) space 