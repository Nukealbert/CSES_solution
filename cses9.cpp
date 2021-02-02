#include<bits/stdc++.h>
    using namespace std;
    #define M 1000000007;
    using l=int64_t;
    using ch=char32_t;
    typedef deque<l>de;
    typedef stack<l>st;
    typedef set<l> se;
    typedef vector<l>vi;
    typedef map<l,l> ml;
    typedef vector<char> vc;
    typedef queue<l> Q;
    typedef vector<pair<l,l>> vp;
    typedef vector<tuple<l,l,l>> vt;
    typedef pair<l,l> pi;
    typedef map<char,l> mc;
    int main(){
               l n;cin>>n;
               l a[n];for(auto i=0;i<n;i++)a[i]=i+1;
               l b=(n*(n+1))/2;
               if(b%2!=0)cout<<"NO"<<endl;
               else
               {
                   cout<<"YES"<<endl;
                   l b1=n/2;
                    cout<<b1<<endl;
                    l i=0;
                    l j=n-1;
                    l c=0;
                    while (c!=b1)
                    {
                        if(c%2==0)
                        {
                            cout<<a[j]<<" ";
                            a[j]=-1;
                            j--;
                        }
                        else
                        {
                            cout<<a[i]<<" ";
                            a[i]=-1;
                            i++;
                        }
                        c++;
                    }
                    cout<<endl;
                    cout<<n-n/2<<endl;
                    for(auto i=0;i<n;i++)
                        if(a[i]!=-1)
                            cout<<a[i]<<" ";
                            cout<<endl;
               }
        return 0;
    }

