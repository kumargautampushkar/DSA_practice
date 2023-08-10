#include <bits/stdc++.h>
using namespace std;

int paths_dp(int m, int n,int i,int j){
    if(i>=m){
        return 0;
    }
    if(j>=n){
        return 0;
    }

    if(i==m-1){
        return 1;
    }
    if(j==n-1){
        return 1;
    }

    return paths_dp(m,n,i,j+1)+paths_dp(m,n,i+1,j);
}

int main(int argc, char const *argv[])
{
    int m,n;
    cin>>m>>n;
    cout<<paths_dp(m,n,0,0)<<endl;;
    return 0;
}
