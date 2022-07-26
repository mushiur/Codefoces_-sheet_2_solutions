//Problem L. GCD
//URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L

//https://github.com/newlyyyy/
//Coded By: Mushiur Rahman

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,gcd;
    cin>>n1>>n2;

    int n=max(n1,n2);

    for (int i = 1; i <= n; i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            gcd=i;
        }
    }
    
    cout<<gcd<<endl;

    return 0;
}