#include <bits/stdc++.h>
using namespace std;

int bino(int n,int k)
{   
    int ans=1;
    int w=min(k,n-k);
    for(int i=0;i<w;i++){
        ans*=n-i;
        ans/=i+1;
    }
    return ans;
}

int main(){

    int n,k;
    cin>>n>>k;
    cout<<bino(n,k)<<endl;

    return 0;
}