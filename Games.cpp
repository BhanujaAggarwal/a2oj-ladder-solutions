#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int xoxo[n],ahhh[n],count=0;
    for(int i=0;i<n;i++)
    {
        cin>>xoxo[i]>>ahhh[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(xoxo[i]==ahhh[j])
            count++;
            if(ahhh[i]==xoxo[j])
            count++;
        }
    }
    cout<<count;
    return 0;
}
