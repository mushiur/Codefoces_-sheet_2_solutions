//Problem O. Pyramid
//URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O

//https://github.com/newlyyyy/
//Coded By: Mushiur Rahman

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;cin>>n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}