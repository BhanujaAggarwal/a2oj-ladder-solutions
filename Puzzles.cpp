#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int xoxo[m];
    for(int i=0;i<m;i++)
    {
        cin>>xoxo[i];
    }
    sort(xoxo,xoxo+m);
    int diff=(xoxo[n-1]-xoxo[0]);
    for(int i=0;i<m-n+1;i++)
    {
        if(xoxo[n+i-1]-xoxo[i]<diff)
        diff=xoxo[n+i-1]-xoxo[i];
    }
    cout<<diff;
    return 0;
}
