#include <bits/stdc++.h> 
int cnt;

void merge(vector<int>& arr,int l,int m,int r)
{
    int i=l,j=m+1;
    while(i<=m && j<=r)
    {
        if(arr[i]>2*arr[j])
        {
            cnt+=m-i+1;
            j++;
        }
        else
            i++;
    }
    int a[r - l + 1], t = 0;
        i = l, j = m + 1;
        while (i <= m and j <= r) {
            if (i <= m and arr[i] < arr[j]) {
                a[t++] = arr[i++];
            } else {
                a[t++] = arr[j++];
            }
        }
        while (i <= m) {
            a[t++] = arr[i++];
        }
        while (j <= r) {
            a[t++] = arr[j++];
        }
        for (int i = 0; i < r - l + 1; i++) {
            arr[l + i] = a[i];
        }
        return;
}

void mergeSort(vector<int>& arr,int l,int r)
{
    if(l<r)
    {
        int mid=l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
    return;
}

int reversePairs(vector<int> &arr, int n){
    cnt=0;
    mergeSort(arr,0,n-1);
    return cnt;
}