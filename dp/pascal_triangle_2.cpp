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

vector<int> gptrow(int w){
    vector <int> ans;
    for(int i=0;i<=w;i++){
        ans.push_back(bino(w,i));
    }
    return ans;
}

void printvector(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    int k;
    cin>>k;
    vector <int> v=gptrow(k);
    printvector(v);
    return 0;
}
