#include<bits/stdc++.h>
using namespace std;
#define M 1000000007;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int long long k;
    cin>>k;
    while (k--)
    {
        int long long n;
        cin>>n;
        int long long sum=0;
        for(auto i=1; i<=n; i++)
        {
            string s=bitset<8>(i).to_string();
            int long long f=stoi(s);
            sum+=f;

        }
        sum=sum%M;
        cout<<sum<<endl;

    }

    return 0;
}
