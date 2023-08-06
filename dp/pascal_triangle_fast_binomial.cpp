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

vector<vector<int>>gpt(int w){
    vector <vector<int>> ans;

    for(int i=0;i<w;i++){
        vector<int> v;
        for(int j=0;j<=i;j++){
            v.push_back(bino(i,j));
        }
        ans.push_back(v);
    }
    return ans;
}



void printvect(vector<vector<int>> &v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}



int main(){
    int k;
    cin>>k;
    vector<vector<int>> ans=gpt(k);
    printvect(ans);
    return 0;
}