#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int freq[26];
    memset(freq,0,sizeof(freq));
    int n=s.size();
    for(int i=0;i<n;i++){
        freq[s[i] - 'a']++;
    }
    for(int i=0;i<n;i++){
        if(freq[s[i]-'a']!=0){
            cout<< s[i]  <<  freq[s[i]-'a'];
            freq[s[i]-'a']=0;
        }
    }
    return 0;
}