//Problem W. Shape3
//URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W

//https://github.com/newlyyyy/
//Coded By: Mushiur Rahman

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;cin>>n;
	for (int i = 1; i <= n; ++i)
	{
		for(int j=i;j<n;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=2*i-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	for(int i=n;i>=1;i--)
	{
		for (int j = i; j < n; ++j)
		{
			cout<<" ";
		}
		for (int j = 1; j <= 2*i-1; ++j)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}