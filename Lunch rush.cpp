#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int xoxo[n],down[n],haha[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>down[i]>>xoxo[i];
    }
    for(long long int i=0;i<n;i++)
    {
        if(xoxo[i]<=k)
        {
            haha[i]=down[i];
        }
        else
        {
            haha[i]=down[i]-(xoxo[i]-k);
        }
    }
    sort(haha,haha+n);
    cout<<haha[n-1];
    return 0;
}
