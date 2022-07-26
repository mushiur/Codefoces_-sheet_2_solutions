//Problem I. Palindrome
//URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I

//https://github.com/newlyyyy/
//Coded By: Mushiur Rahman

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,r=0,re;cin>>n;
	int temp=n;
	while(temp>0)
	{
		re=temp%10;
		r=(r*10)+re;
		temp/=10;
	}
	cout<<r<<endl;
	(r==n)?cout<<"YES\n":cout<<"NO\n";

	return 0;
}