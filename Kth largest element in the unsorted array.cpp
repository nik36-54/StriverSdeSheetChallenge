// sorting
// quick select algo
// priority queue(min heap)

int lpart(vector<int>& arr,int l,int h)
{
    int pivot=arr[h],i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

int kthLargest(vector<int>& arr, int n, int k)
{
	k=n-k+1;
    int low=0,high=n-1;
    while(low<=high)
    {
        int pivot=lpart(arr,low,high);
        if(pivot==k-1)
            return arr[pivot];
        else if(pivot>k-1)
            high=pivot-1;
        else
            low=pivot+1;
    }
    return -1;
    
}