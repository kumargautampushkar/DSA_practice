#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll factorial(int k){
    ll ans=1;
    for(ll i=1;i<=k;i++){
        ans*=i;
    }
    return ans;
}
ll catalan(ll k){
    ll ans;
    ans=factorial(2*k)/(factorial(k)*factorial(k+1));
    return ans;
}

ll catalanDP(ll n)
{

    ll cata[n + 1];
    cata[0] = cata[1] = 1;
    for (ll i = 2; i <= n; i++) {
        cata[i] = 0;
        for (ll j = 0; j < i; j++)
            cata[i] += cata[j] * cata[i - j - 1];
    }
    return cata[n];
}
int main(int argc, char const *argv[])
{
    int aa;
    cin>>aa;
    cout<<catalanDP(aa)<<endl;
    return 0;
}
