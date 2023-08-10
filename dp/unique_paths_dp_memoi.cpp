#include <bits/stdc++.h>
using namespace std;

int paths_dp(int m, int n,int i,int j,vector<vector<int>> &dp){
    
    if(dp[i][j]!=-1)
        return dp[i][j];
    
    if(i>=m || j>=n)
        return dp[i][j]=0;
    
    if(i==m-1 || j==n-1)
        return dp[i][j]=1;

    return dp[i][j]=paths_dp(m,n,i,j+1,dp)+paths_dp(m,n,i+1,j,dp);
}

int main(int argc, char const *argv[])
{
    int m,n;
    cin>>m>>n;

    vector <vector <int>> dp(m+1,vector <int> (n+1,-1));

    cout<<paths_dp(m,n,0,0,dp)<<endl;

    return 0;
}
