#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int a[10]={10,13,14,15,18,20,55,66,77,22};
    sort(a,a+10);
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}