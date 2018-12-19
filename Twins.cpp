#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int sum=0,coins=0;
    cin>>n;
    int xoxo[n];
    for(int i=0;i<n;i++)
    {
        cin>>xoxo[i];
        sum=sum+xoxo[i];
    }
    sort(xoxo,xoxo+n,greater<int>());
    long long int hehe=0,left=sum;
    for(int i=0;i<n;i++)
    {
        hehe=hehe+xoxo[i];
        coins++;
        left=sum-hehe;
        if(hehe>left)
        {
            break;
        }
    }
    cout<<coins;
    return 0;
}
