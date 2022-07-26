#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,n1;
    cin>>n;
    int max=0;
    for(int i=1;i<=n;i++)
    {
        cin>>n1;
        if(n1>max)
        {
            max=n1;
        }
    }
    cout<<max<<endl;
    return 0;
}

//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E