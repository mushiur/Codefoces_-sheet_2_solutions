//Problem  P. Shape1
//URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P

//https://github.com/newlyyyy/
//Coded By: Mushiur Rahman

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;cin>>n;
	for (int i = 1; i <= n; i++)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}