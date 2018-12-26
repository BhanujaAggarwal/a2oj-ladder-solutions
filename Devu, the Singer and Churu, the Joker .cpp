#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,jokes=0,sum=0;
    cin>>n>>d;
    int xoxo[n];
    for(int i=0;i<n;i++)
    {
        cin>>xoxo[i];
        sum=sum+xoxo[i];
    }
    if(d<(sum+10*(n-1)))
    cout<<"-1";
    else
    {
        cout<<(d-sum)/5;
    }
    return 0;
} 
