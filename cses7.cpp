#include<bits/stdc++.h>
using namespace std;

int main(){
    int long long  n;
    cin>>n;
    int long long ans=0;
    for(int long long k=1;k<=n;k++){
        ans=((k*k)*((k*k)-1))/2 - 4*(k-1)*(k-2);
        cout<<ans<<endl;
    }
    return 0;

}
