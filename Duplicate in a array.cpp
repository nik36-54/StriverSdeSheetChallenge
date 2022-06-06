int findDuplicate(vector<int> &arr, int n){
	unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        if(s.find(arr[i])!=s.end())
            return arr[i];
        s.insert(arr[i]);
    }
    return -1;
}

// O(N)time ...O(N)space for unordered_set