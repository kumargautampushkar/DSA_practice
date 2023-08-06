#include <bits/stdc++.h>
using namespace std;

void inputarr (vector <int> &v, int n){
    for(int i=0;i<n;i++){
        cin>>v[i];
    }    
}

void printvect(vector <int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}   

void printvect(vector <int> &v, int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


void inputarr(vector<vector<int>> &v, int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
}


void printarr(vector<vector<int>> &v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();i++){
            cout<<v[i][j]<<endl;
        }
        cout<<endl;
    }
}

bool step_ladder_search(vector <vector<int>> &v,int key){
    int p,q;
    p=v.size();
    q=v[0].size();

    bool flag=false;
    int i=0,j=q-1;
    //cout<<i<<" "<<j<<endl;
    //cout<<v[i][j]<<endl;
    while(i<p && j>=0){
        if(v[i][j]==key){
            flag=true;
            break;
        }
        if(key>v[i][j]){
            i++;
        }
        if(key<v[i][j]){
            j--;
        }
    }

    return flag;
}


int main(int argc, char const *argv[])
{
    int m,n;
    cin>>m>>n;
    int key;
    cin>>key;
    vector<vector<int>> v(m,vector<int> (n));
    inputarr(v,m,n);
    bool ans=step_ladder_search(v,key);
    if(ans) cout<<"found"<<endl;
    else cout<<"not found"<<endl;
    return 0;
}
