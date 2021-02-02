#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    bool res;
    cin>>n;
    char seat[n];
    for(int i=0;i<n;i++){
        cin>>seat[i];
    }
    for(int j=0;j<n;j++){

        if((seat[j]=="00|XX")||(seat[j]=="XX|OO")){
            res=true;
            if(seat[j]=="OO|XX")
                seat[j]="++|XX";
            else if(seat[j]=="XX|OO"){
                seat[j]=="XX|++"
            }
            break;

        }
        else
            res=false;
    }
    if(res==true){
        cout<<"YES";
        for(int k=0;k<n;k++){
            cout<<seat[k];
        }
    }
    else
        cout<<"NO";

    return 0;
}
