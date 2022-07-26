//Problem Y. Easy Fibonacci
//URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y

//https://github.com/newlyyyy/
//Coded By: Mushiur Rahman

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n,a=0,b=1;cin>>n;
	if(n==1) cout<<"0";
	else{
		cout<<"0 1";
		for(int i=3;i<=n;i++)
		{
			ll x=a+b;
			cout<<" "<<x;
			a = b ;
			b = x; 
		}
	}
	return 0;
}