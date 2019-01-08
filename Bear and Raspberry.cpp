#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,count=0,the_cure=0;
    cin>>n>>c;
    int xoxo[n],haha[n-1];
    for(int i=0;i<n;i++)
    {
        cin>>xoxo[i];
    }
    for(int i=0;i<n-1;i++)
    {
        haha[i]=xoxo[i]-xoxo[i+1];
    }
    sort(haha,haha+n-1);
    if(haha[n-2]>c)
    {
        cout<<haha[n-2]-c;
    }
    else
    cout<<"0";
    return 0;
}
