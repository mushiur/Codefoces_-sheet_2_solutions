//Problem R. Sequence of Numbers and Sum
//URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R

//https://github.com/newlyyyy/
//Coded By: Mushiur Rahman

#include <bits/stdc++.h>
using namespace std;

int main()
{
	while(true){
		int x,y,sum=0;
		cin>>x>>y;
		if(x<=0 || y<=0)
		{
			break;
		}
		int n=max(x,y);
		int m=min(x,y);
		for(int i=m;i<=n;i++)
		{
			sum+=i;
			cout<<i<<" ";
		}
		cout<<"sum ="<<sum<<endl;
	}
	return 0;
}