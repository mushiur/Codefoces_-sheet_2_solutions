//Problem V. PUM
//URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V

//https://github.com/newlyyyy/
//Coded By: Mushiur Rahman

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;cin>>n;
	int x=1;
	for(int i=1;i<=n;i++)
	{
		for (int j = x; j <= x+2; j++)
		{
			cout<<j<<" ";
		}
		cout<<"PUM"<<endl;
		x+=4;
	}
}