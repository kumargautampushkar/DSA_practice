#include <iostream>
#include <vector>

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


int binary_search_recursion(vector<int> &v,int key, int low, int hi)
{
    int mid=(low+hi)/2;
    if(low>hi) 
        return -1;
    if(key==v[mid])
        return mid;
    if(key>v[mid])
        return binary_search_recursion(v,key,mid+1,hi);
    if(key<v[mid])
        return binary_search_recursion(v,key,low,mid-1);
    return -1;
}


int binary_search_iteration(vector <int> &v,int key){
    int low=0;
    int hi=v.size()-1;
    int mid=(low+hi)/2;
    int index=-1;
    while(low<hi){
        mid=(low+hi)/2;
        if(key==v[mid]){
            index=mid;
            break;
        }
        else if(key<v[mid]){
            hi=mid-1;
        }
        else if(key>v[mid]){
            low=mid+1;
        }
    }
    return index;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector <int> v(n);
    inputarr(v,n);
    int key;
    cin>>key;
    cout<<"Found at(recursive) ";
    cout<<binary_search_recursion(v,key,0,n-1)<<endl;

    cout<<"Found at(iterative) ";
    cout<<binary_search_iteration(v,key);

    return 0;
}
