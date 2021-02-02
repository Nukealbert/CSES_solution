#include<bits/stdc++.h>
using namespace std;


int minrotate(string s){
    int r=0,l=0,x=0,y=0,z=0;
    int len=s.length();
    for(int i=0;i<len;i++){
        if(s[i]==')')
            l++;
        else
            r++;
    }
    if(l!=r)
        return 0;
    else{
        l=0;
        for(int i=0;i<len;i++){
            if(s[i]=='(')
                l++;
            else
                l--;
            if(l<y){
                y=l;
                x=i+1;
            }
        }
          reverse(s.begin(), s.begin()+x);
          reverse(s.begin()+x, s.end());

          l=0;
          for(int i=0;i<len;i++){
            if(s[i]=='(')
                l++;
            else
                l--;
            if(l==0)
                z++;
          }

    }
    return z;
}


int main(){
    string str;
    cin>>str;
    cout<<minrotate(str);
}
