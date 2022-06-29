// this question is solved by many method:
1. Binary search
2. Divide & Conquer 
3. Sorting
4. Trie


//Below one is Sorting But try to solve through all approaches.
#include<bits/stdc++.h>
string longestCommonPrefix(vector<string> &arr, int n)
{
    sort(arr.begin(),arr.end());
    int i=0;
    while(arr[0][i]==arr[n-1][i])
        i++;
    string s=arr[0],str="";
    
    for(int j=0;j<i;j++)
        str+=s[j];
    
    return str;
}


