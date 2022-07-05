#include <bits/stdc++.h> 
//BOYER-MOORE'S Algo
//O(N) time ...O(1) space
int findMajorityElement(int arr[], int n) {
	int count = 0;
    int candidate = 0;

        for (int i=0;i<n;i++) {
            if (count == 0) {
                candidate = arr[i];
                count=1;
                continue;
            }
            if(arr[i]==candidate)
                count++;
            else
                count--;
        }
    count=0;
    for(int i=0;i<n;i++)
        if(arr[i]==candidate)
            count++;
    
    if(count>n/2)
        return candidate;
        
    
    
    
    return -1;
    
}
//O(N) time O(N) space

int findMajorityElement(int arr[], int n) {
	unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
        mp[arr[i]]++;
    
    for(auto x:mp)
        if(x.second>n/2)
            return x.first;
    
    return -1;
    
}