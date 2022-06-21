#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &arr)
{
    int n=arr.size(),j=0;
    sort(arr.begin(),arr.end());
    
    vector<vector<int>> merged;
        for(auto it:arr)
        {
            if(merged.empty() || merged.back()[1]<it[0])
                merged.push_back(it);
            else
                merged.back()[1]=max(merged.back()[1],it[1]);
        }
        
        return merged;
}
