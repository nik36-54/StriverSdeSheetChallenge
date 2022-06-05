vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans;
    int n=arr.size();
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            vector<int> temp;
            if(arr[i]+arr[j]==s)
            {
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                ans.push_back(temp);
            }
            
        }
    }
    
    sort(ans.begin(),ans.end());
    return ans;
    


    // this code gives you TLE 
    // 34.8/40 scored
}