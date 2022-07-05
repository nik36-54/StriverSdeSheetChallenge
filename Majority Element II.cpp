#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    int n=arr.size();
    int n1=-1,n2=-1,cnt1=0,cnt2=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==n1)
            cnt1++;
        else if(arr[i]==n2)
            cnt2++;
        else if(cnt1==0)
        {
            n1=arr[i];
            cnt1=1;
        }
        else if(cnt2==0)
        {
            n2=arr[i];
            cnt2=1;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    cnt1=0;
    cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(n1==arr[i])
            cnt1++;
        if(n2==arr[i])
            cnt2++;
    }
    
    vector<int> ans;
    if(cnt1>n/3)
        ans.push_back(n1);
    if(cnt2>n/3)
        ans.push_back(n2);
    
    return ans;

}