//This solution is not the correct solution
//Please it needs correction, altough logic seems fine

#include <bits/stdc++.h>
using namespace std;



void printarr(vector<vector<int>> &ans){
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

void inputvect(vector<vector<int>> &v,int m, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cin>>v[i][j];
    }
}


int paths_dp(vector<vector<int>> &grid,int m, int n,int i,int j,vector<vector<int>> &dp){
    if(grid[m-1][n-1]==1) return 0;
    if(i==m || i==n) return 0;
    if(grid[i][j]==1) return 0;
    if(dp[i][j]!=-1) return 0;
    if(i==m-1 || j==n-1)
        return dp[i][j]=1;

    return dp[i][j]=paths_dp(grid,m,n,i,j+1,dp)+paths_dp(grid,m,n,i+1,j,dp);
}


int uniquepaths(vector<vector<int>> &grid){
    int m=grid.size();
    int n=grid[0].size();
    vector<vector<int>> dp(m+1,(vector<int> (n+1,-1)));
    return paths_dp(grid,m,n,0,0,dp);
    
}

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> v(m,vector<int>(n));
    inputvect(v,m,n);
}