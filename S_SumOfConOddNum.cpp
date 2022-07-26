//Problem S. Sum of Consecutive Odd Numbers
//URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S

//https://github.com/newlyyyy/
//Coded By: Mushiur Rahman

#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;cin>>n;

	for (int i = 0; i < n; ++i)
	{
		int x,y,sum=0;cin>>x>>y;
		if(x>y) swap(x,y);
		for (int i = x+1; i < y; ++i)
		{
			if(i%2) sum+=i;
		}
		cout<<sum<<endl;
	}

	return 0;
}