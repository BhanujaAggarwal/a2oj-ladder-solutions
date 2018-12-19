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
    for(int j=1;j<=n;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(xoxo[i]==j)
            cout<<i+1<<" ";
        }
    }

    return 0;
}
