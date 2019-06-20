#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,demons=0;
    cin>>n;
    pair<long long int,long long int> xoxo[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>xoxo[i].first>>xoxo[i].second;
    }
    sort(xoxo,xoxo+n);
    for(long long int i=0;i<n-1;i++)
    {
        if(xoxo[i+1].first>xoxo[i].first && xoxo[i+1].second<xoxo[i].second)
        {
            demons=1;
            break;
        }
    }
    if(demons==0)
    cout<<"Poor Alex";
    else
    cout<<"Happy Alex";
    return 0;
}
