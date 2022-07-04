#include <bits/stdc++.h> 
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int> p;
    int i=0;
    
    while(i<n)
    {
        int idx=arr[i]-1;
        if(arr[i]!=arr[idx])
            swap(arr[i],arr[idx]);
        else
            i++;
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
        {
            p.first=i+1;
            p.second=arr[i];
            break;
        }
    }
    return p;
	
}
