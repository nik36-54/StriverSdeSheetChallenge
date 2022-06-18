#include <bits/stdc++.h> 
long long ans=0;

void merge(long long *arr,int l,int m,int r)
{
    int n1=m-l+1,n2=r-m;
    long long left[n1],right[n2];
    for(int i=0;i<n1;i++)
        left[i]=arr[i+l];
    for(int i=0;i<n2;i++)
        right[i]=arr[i+m+1];
    int i=0,j=0,k=l;
    
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
            arr[k++]=left[i++];
        else
        {
            arr[k++]=right[j++];
            ans+=n1-i;
        }
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];
    
    return;
}


void mergeSort(long long *arr,int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
    return;
}

long long getInversions(long long *arr, int n){
    mergeSort(arr,0,n-1);
    return ans;
}