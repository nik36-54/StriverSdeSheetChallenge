int uniqueElement(vector<int> arr, int n)
{
    if(n==1)return arr[0];
	if(arr[0]!=arr[1])
        return arr[0];
    if(arr[n-1]!=arr[n-2])
        return arr[n-1];
    for(int i=1;i<=n-2;i++)
    {
        if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1])
            return arr[i];
    }
    return -1;
}

// O(N) time ...O(1) space 