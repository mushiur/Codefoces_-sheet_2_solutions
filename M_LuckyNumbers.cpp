//Problem M. Lucky Numbers
//URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M

//https://github.com/newlyyyy/
//Coded By: Mushiur Rahman

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    bool x = false;
    int flag = 1;

    for(;a<=b;a++)
    {
        int temp =a;
        while(temp>0)
        {
            int last = temp%10;
            temp/=10;
            if(last==4||last==7)
            {
                x=true;
            }
            else{
                x=false;
                break;
            }
        }
        if(x)
        {
            flag=0;
            cout<<a<<" ";
        }
    }
    if(flag==1)
    {
        cout<<-1;
    }

    return 0;
}