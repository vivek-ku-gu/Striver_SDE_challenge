#include <bits/stdc++.h> 
int up(int r,int c,int m,int n,vector<vector<int>> &dp)
{ 
    if(r > m || c> n  ) return 0;
    if(r==m && c == n) return 1;
    if(dp[r][c]!=-1) return dp[r][c];
     int right = up(r,c+1,m,n,dp);
     int left =  up(r+1,c,m,n,dp);
     return dp[r][c]=left + right;
}
int uniquePaths(int m, int n) {
	// Write your code here.
    vector<vector<int>> dp(m,(vector<int>(n,-1)));
    return up(0,0,m-1,n-1,dp);
}