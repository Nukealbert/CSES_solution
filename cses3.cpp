#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    int ans = 0, temp = 0;
    for (int i = 0; i<n; i++) {
        if (s[i] >= s[i + 1]) {
            temp++;
            s[i+1]+=1;
        }
        else {
            ans = max(ans, temp);
            temp = 0;
        }
    }
    ans = max(ans, temp);
    cout<<ans;
    return 0;
}
