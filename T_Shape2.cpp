//Problem T. Shape2
//URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T

//https://github.com/newlyyyy/
//Coded By: Mushiur Rahman

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;cin>>n;
	for(int i=1;i<=n;i++)
	{
		for (int j = 0; j < n-i; ++j)
		{
			cout<<" ";
		}
		for (int j = 0; j < 2*i-1; ++j)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}