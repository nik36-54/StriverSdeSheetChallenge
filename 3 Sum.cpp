#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	sort(arr.begin(),arr.end());
    vector<vector<int>> res;
    
    for(int i=0;i<n;i++)
    {
        int sum=K-arr[i];
        int low=i+1,high=n-1;
        while(low<high)
        {
            if(arr[low]+arr[high]==sum)
            {
                vector<int> ans={arr[i],arr[low],arr[high]};
                res.push_back(ans);
                
                while(low<high && arr[low]==ans[1])low++;
                while(low<high && arr[high]==ans[2])high--;
            }
            else if(arr[low]+arr[high]<sum)
                low++;
            else
                high--;
        }
        while(i+1<n && arr[i+1]==arr[i])i++;
    }
    return res;
}