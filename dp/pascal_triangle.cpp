#include <bits/stdc++.h>
using namespace std;

//gpt is generate pascal triangle

vector<vector<int>> gpt(int r){
    vector <vector<int>> ans;
    vector <int> k1(1,1),k2(2,1);
    
    if(r==0){
        ans.push_back(k1);
        return ans;
    }
    if(r==1){
        ans.push_back(k1);
        ans.push_back(k2);
    }
    ans.push_back(k1);
    ans.push_back(k2);

    for(int i=2;i<r;i++){
        vector<int> temp(i+1);
        temp[0]=0;
        temp[i]=0;
        for(int j=1;j<i;j++){
            temp[j]=ans[i-1][j-1]+ans[i][j];
        }
        ans.push_back(temp);
    }
    //for(int i=3)
    return ans;;
}

void printvect(vector<vector<int>> &v){
    for(int i=0;i<v.size();i++){
        //vector<int> &temp = v[i];
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