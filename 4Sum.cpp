#include <bits/stdc++.h> 

// bool solve(vector<int>& arr,int low,int n,int target)
// {
//     unordered_set<int> st;
//     for(int i=low;i<n;i++)
//     {
//         if(st.find(target-arr[i])!=st.end())
//             return true;
        
//         st.insert(arr[i]);
//     }
//     return false;
// }

string fourSum(vector<int> nums, int target, int n) {
    vector<vector<int>> v;
      sort(nums.begin(), nums.end());
      
      for(int i = 0; i < nums.size(); i++){
        if(i != 0 && nums[i] == nums[i - 1]) continue;
        for(int j = i + 1; j < nums.size(); j++){
          if(j != i + 1 && nums[j] == nums[j - 1]) continue;
          
          int k = j + 1;
          int l = nums.size() - 1;
          
          while(k < l){
            long long sum = nums[i] + nums[j] + nums[k] + nums[l];
            if(target - sum == 0){
              return "Yes";
              k++;
              while(k < l && nums[k] == nums[k - 1]) k++;
            }
            else if(sum < target) k++;
            else l--;
          }
          
        }
      }
      return "No";
}
