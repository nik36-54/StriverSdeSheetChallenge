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

*************************************************
// But there is also a O(log(m*n)) time approach.

bool findTargetInMatrix(vector<vector<int>> & mat, int m, int n, int target) {
    int start = 0, end = m * n - 1;

    // Binary search.
    while (start <= end) {
        int mid = start + (end - start) / 2;
        int val = mat[mid / n][mid % n];

        if (target < val) {
            end = mid - 1;
        } else if (target > val) {
            start = mid + 1;
        } else {
            return true;
        }
    }

    return false;
}
