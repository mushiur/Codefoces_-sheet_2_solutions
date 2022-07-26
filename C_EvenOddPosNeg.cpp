#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,e=0,o=0,p=0,ne=0;cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int x;cin>>x;
		(x%2==0)?e++:o++;
		if(x!=0)
			(x>0)?p++:ne++;
	}
	cout<<"Even: "<<e<<endl;
	cout<<"Odd: "<<o<<endl;
	cout<<"Positive: "<<p<<endl;
	cout<<"Negative: "<<ne<<endl;
	return 0;
}

//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C