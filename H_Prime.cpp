//Problem H. One Prime
//URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

//https://github.com/newlyyyy/
//Coded By: Mushiur Rahman

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,flag=0;
	cin>>n;
	if(n==0||n==1) flag=1;
	for (int i = 2; i <=n/2; ++i)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	(flag==0)?cout<<"YES\n":cout<<"NO\n";

	return 0;
}