#include <iostream>
#include<string>
#include <cstdlib>
using namespace std;

int main(){
    int n1,n2,m1=0,m2=0,m3=0;
    cin>>n1>>n2;
    for(int i=1;i<=6;i++){
        if(abs(n1-i)<abs(n2-i))
            m1++;
        if(abs(n1-i)==abs(n2-i))
            m3++;
        if(abs(n1-i)>abs(n2-i))
            m2++;
    }
    cout<<m1<<m3<<m2<<endl;
    return 0;
}
