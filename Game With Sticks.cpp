#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n>m)
    {
        n=m;
    }
    else if(m>n)
    {
        m=n;
    }
    if(m==1)
    cout<<"Akshat";
    else
    {
        if(m%2==0)
        {
            cout<<"Malvika";
        }
        else
        cout<<"Akshat";
    }
    return 0;
}
