#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x=0,y=0,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]+1==arr[i+1])
            x++;
        else if(arr[i]==arr[i+1]){
            x++;
            y++;
        }
        else{
            if(x!=y)
                c+=((x*(x+1))/2);
            x=0;
            y=0;
        }
    }
    cout<<c;

    return 0;
}
