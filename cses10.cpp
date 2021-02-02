#include<bits/stdc++.h>
using namespace std;

int main()
{
    int long long n,ct=0;
    cin>>n;
	for(int long long i=5;n/i>=1;i*=5){
        ct+=n/i;
	}
	cout<<ct;
	return 0;
}
