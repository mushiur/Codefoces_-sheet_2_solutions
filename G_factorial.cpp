//Problem G. Factorial
//URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

//https://github.com/newlyyyy/
//Coded By: Mushiur Rahman

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int x;cin>>x;
		long long int fact=1;
		for (int i = 2; i <= x; ++i)
		{
			fact*=i;
		}
		cout<<fact<<endl;
	}
}