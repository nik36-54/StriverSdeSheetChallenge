long long maxSubarraySum(int arr[], int n)
{
    long long ans=arr[0],curr=arr[0];
    for(int i=1;i<n;i++)
    {
        curr=curr+arr[i];
        if(curr<arr[i])
            curr=arr[i];
        if(ans<curr)
            ans=curr;
    }
    if(ans<=0)return 0;
    return ans;
}

// O(N) time ..O(1) space
// KADANE'S ALGORITHM