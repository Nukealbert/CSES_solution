#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll binpow(ll a, ll b){
    if(b==0) return 1;
    ll res = binpow(a,b/2);
    if(b%2) return a;
    else{
        return res*res;
    }
}


int main(){
    ll a,b;
    cin>>a>>b;
    cout<<binpow(a,b);
    return 0;
}