//Problem J. Primes from 1 to n
//URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J

//https://github.com/newlyyyy/
//Coded By: Mushiur Rahman

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,flag=0;cin>>n;
	for (int i = 2; i <= n; ++i)
	{
		for (int j = 2; j < i; ++j)
		{
			if(i%j==0){
				flag=1;break;
			}
			else flag=0;
		}
		if(flag==0) cout<<i<<" ";
	}
	return 0;
}