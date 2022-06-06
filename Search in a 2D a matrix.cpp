bool findTargetInMatrix(vector<vector<int>>& mat,int m,int n,int target) {
    int i=0,j=n-1;
    while(i>=0 && i<m && j>=0 && j<n)
    {
        if(mat[i][j]==target)
            return true;
        else if(mat[i][j]>target)
            j--;
        else
            i++;
    }
    return false;
}

// O(m+n) time O(1) space