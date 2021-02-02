#include<bits/stdc++.h>
using namespace std;

int main(){
    int long long a,b;
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a<b)swap(a,b);
if(a>2*b){
    cout<<"NO\n";
}else{
    a%=3,b%=3;
    if(a<b)swap(a,b);
    if((a==2 && b==1) || (a==b && b==0)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}
    }
}
