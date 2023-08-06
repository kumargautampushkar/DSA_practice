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

bool matrix_binary_search(vector <vector<int>> &v, int key){
    int m=v.size();
    int n=v[0].size();

    int low1=0,hi1=m-1;
    int mid1=(low1+hi1)/2;
    bool flag1=false;
    int row=-1;
    while(low1<=hi1){
        mid1=(low1+hi1)/2;
        cout<<v[mid1][0]<<" "<<v[mid1][n-1]<<endl;
        if((v[mid1][0]<= key) && (key<=v[mid1][n-1])){
            flag1=true;
            row=mid1;
            break;
            cout<<v[mid1][0]<<" "<<v[mid1][n-1]<<endl;
        }
        else if(key<v[mid1][0] && key<v[mid1][n-1]){
            hi1=mid1-1;
        }
        else if(key>v[mid1][0] && key>v[mid1][n-1])
        {
            low1=mid1+1;
        }
    }

    
    if(flag1==false){
        return false;
        cout<<"false"<<endl;
    }

    bool flag2=false;
    int low=0,hi=n-1,mid=(low+hi)/2;
    int col=-1;
    while(low<=hi){
        mid=(low+hi)/2;
        if(v[row][mid]==key){
            flag2=true;
            col=mid;
            break;
        }
        else if(key>v[row][mid]){
            low=mid+1;
        }
        else if(key<v[row][mid]){
            hi=mid-1;
        }
    }
    //cout<<"Row: "<<row<<endl;
    //cout<<"col: "<<col<<endl;
    return flag2;
}

int main(){
    int p,q,key;
    cin>>p>>q;

    cin>>key;

    vector<vector<int>> v(p,vector<int> (q));
    inputarr(v,p,q);
    
    bool ans=matrix_binary_search(v,key);
    
    if(ans) cout<<"Key Found "<<endl;
    else cout<<"Key Not found "<<endl;

}