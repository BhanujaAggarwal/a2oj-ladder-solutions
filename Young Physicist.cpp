#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int xoxo[n],hehe[n],lol[n];
    for(int i=0;i<n;i++)
    {
        cin>>xoxo[i]>>hehe[i]>>lol[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=xoxo[i];
    }
    if(sum==0)
    {
        for(int i=0;i<n;i++)
        {
            sum+=hehe[i];
        }
        if(sum==0)
        {
            for(int i=0;i<n;i++)
            {
                sum+=lol[i];
            }
            if(sum==0)
            {
                cout<<"YES";
            }
        }
    }
    else
    cout<<"NO";
    return 0;
}
