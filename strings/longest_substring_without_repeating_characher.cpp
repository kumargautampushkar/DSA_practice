#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// This is first attempt and it is wrong as it fails testcases(leetcode)
int lswr(string &s){
    vector <int> v(256,0);
    int count=0;
    int temp=0;
    for(int i=0;i<s.size();i++){
        //v[s[i]]+=1;
        if(v[s[i]]==0){
            v[s[i]]+=1;
            temp++;
        }
        else{
            count=max(temp,count);
            temp=1;
            for(int k=0;k<256;k++){
                v[k]=0;
            }
        }
        count=max(temp,count);
    }
    return count;
}

//using sliding window spproach
int lswr2(string &s){
    int l=0,r=0;
    int temp=0,ans=0;
    vector <int> v(256,0);
    while(r<s.size()){
        if(v[s[r]]==0){
            v[s[r]]=1;
            r++;
        }
        else{
            v[s[l]]=0;
            l++;
        }
        temp=abs(l-r);
        ans=max(temp,ans);
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    cout<<lswr2(s)<<endl;   

    return 0;
}