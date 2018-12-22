#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0,mini=n;
    cin>>n>>m;
    if(n>=m)
    {
        for(int i=0;i<=n/2;i++)
        {
            if((n-i)%m==0)
            {
                count++;
                mini=n-i;
            }
        }
    }
    if(count>0)
    cout<<mini;
    else
    cout<<"-1";
    return 0;
}
