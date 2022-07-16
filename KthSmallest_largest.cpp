#include<bits/stdc++.h>
int lPartition(vector<int>& arr,int l,int h)
{
    int i=l-1,pivot=arr[h];
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

int kthSmallest(vector<int>& arr,int n,int k)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int pivot=lPartition(arr,l,r);
        if(pivot==k-1)
            return arr[pivot];
        else if(pivot>k-1)
            r=pivot-1;
        else
            l=pivot+1;
    }
    return -1;
}

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	vector<int> ans;
    
    int small=kthSmallest(arr,n,k);
    int large=kthSmallest(arr,n,n-k+1);
    
    ans.push_back(small);
    ans.push_back(large);
    return ans;
}