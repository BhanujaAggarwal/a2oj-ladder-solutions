#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int xoxo[n];
    for(int i=0;i<n;i++)
    {
        cin>>xoxo[i];
    }
    int odd=0,even=0;
    for(int i=0;i<3;i++)
    {
        if(xoxo[i]%2==0)
        even++;
        else
        odd++;
    }
    if(even>odd)
    {
        for(int i=0;i<n;i++)
        {
            if(xoxo[i]%2!=0)
            cout<<i+1;
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(xoxo[i]%2==0)
            cout<<i+1;
        }
    }


    return 0;
} 
