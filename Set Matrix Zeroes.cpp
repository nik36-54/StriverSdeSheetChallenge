#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &mat)
{
	int n=mat.size();
    int m=mat[0].size();
    vector<bool> row(n,false),col(m,false);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]==0)
            {
                if(!row[i])
                    row[i]=true;
                if(!col[j])
                    col[j]=true;
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(row[i])
        {
            for(int j=0;j<m;j++)
                mat[i][j]=0;
        }
    }
    
    for(int i=0;i<m;i++)
    {
        if(col[i])
        {
            for(int j=0;j<n;j++)
                mat[j][i]=0;
        }
    }
    
    return;
}