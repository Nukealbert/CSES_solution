#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[8]={-1,2,4,-3,5,2,-5,2};
   int best=0, sum=0;
   for(int i=0;i<8;i++){
    sum= max(arr[i],sum+arr[i]);
    best=max(best,sum);//largest sum sub-array
   }
   cout<<best<<"\n";
}
