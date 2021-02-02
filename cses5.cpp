#include <bits/stdc++.h>
using namespace std;

int main(){
    int  n;
    int i=1,j=2;
    cin>>n;
    vector<int> g1;
     while(j<=n){
        g1.push_back(j);
        j+=2;
    }
    while(i<=n){
        g1.push_back(i);
        i+=2;
    }

    if(n<=3 and n!=1)
        cout<<"NO SOLUTION";
    else if(n==1)
        cout<<1;
    else
    {
        for (auto i = g1.begin(); i != g1.end(); ++i){
            cout << *i << " ";
        }
    }
    return 0;
}
