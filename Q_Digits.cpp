//Problem Q. Digits
//URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

//https://github.com/newlyyyy/
//Coded By: Mushiur Rahman

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,rev=0;cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;cin>>x;
		if(x==0) cout<<0<<endl;
		else{

			while(x>0)
			{
				rev=x%10;
				x/=10;
				cout<<rev<<" ";
			}
			cout<<endl;
		}
		
		
	}
	return 0;
}