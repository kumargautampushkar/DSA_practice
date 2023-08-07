#include <bits/stdc++.h>
using namespace std;

int maximum_prof(vector <int> &v){
    int profit=0;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]<v[i+1]){
            profit+=v[i+1]-v[i];
        }
    }
    return profit;
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

    return 0;
}
