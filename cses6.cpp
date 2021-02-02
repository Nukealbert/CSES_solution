#include <bits/stdc++.h>
using namespace std;


int main()
{
    int long long x,y;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x<y)
        {
            int long long n;
            if(y%2!=0)
            {
                n=(y*y)-x+1;
            }
            else
                n=((y-1)*(y-1))+x;
            cout<<n<<endl;
        }
        else
        {
            int long long n;
            if(x%2!=0)
            {
                n=((x-1)*(x-1))+y;
            }
            else
                n=(x*x)-y+1;
            cout<<n<<endl;
        }

    }
    return 0;
}
