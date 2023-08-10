#include <bits/stdc++.h>
using namespace std;
//This code is incorrect//
vector <int> preprocessor(vector <int> &v){
    vector<int> ans;
    for(int i=0;i<v.size()-1;i++){
        int temp=v[i+1]-v[i];
        ans.push_back(temp);
    }

    return ans;
}

int kadane(vector<int> &diff, int &st,int &ed){
    int s=0;
    st=0;
    ed=0;    
    int max=0;
    bool flag=false;
    for(int i=0;i<diff.size();i++){
        if(diff[i]>0){
            flag=true;
        }
    }
    if(flag==false){
        return 0;
    }

    int csum=0;
    int msum=0;//careful here

    for(int i=0;i<diff.size();i++){
        csum=csum+diff[i];
        if(csum>msum){
            msum=csum;
            st=s;
            ed=i;
        }
        if(csum<0){
            s=i+1;
            csum=0;
        }
    }
    return msum;
}

vector <int> deleter(vector<int> &diff, int p, int q){
    vector <int> ans;
    for(int i=0;i<diff.size();i++){
        if(p<=i && i<=q){
            continue;
        }
        else{
            ans.push_back(diff[i]);
        }
    }
    return ans;
}

int maximum_prof(vector<int> &v){
    int max_profit=0;
    vector <int> diff=preprocessor(v);
    int i=0,j=0;
    int temp1=kadane(diff,i,j);
    vector <int> diff2=deleter(diff,i,j);
    int temp2=kadane(diff,i,j);
    max_profit=temp1+temp2;
    return max_profit;
}

void printarr(vector <int> &v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    cout<<maximum_prof(v)<<endl;

    // int i,j;
    // cin>>i>>j;
    // vector <int> ans=deleter(v,i,j);
    // printarr(ans);
    // vector <int> arr=preprocessor(v);
    // printarr(arr);

    // int i=0,j=0;
    // cout<<kadane(v,i,j)<<endl;
    // cout<<i<<" "<<j<<endl;  
    
    return 0;
}
