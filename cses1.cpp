#include<bits/stdc++.h>
using namespace std;

int main(){
    int long n,sum=0,miss=0,tot=0;
    cin>>n;
    int a[n-1];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    for(int j=0;j<n-1;j++){
        sum += a[j];
    }
    tot=(n*(n+1))/2;
    miss = tot-sum;
    cout<<miss;
    return 0;
}
