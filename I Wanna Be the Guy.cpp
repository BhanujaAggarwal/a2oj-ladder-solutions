#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int p,q;
    cin>>p;
    int lil_x[p];
    for(int j=0;j<p;j++)
    {
        cin>>lil_x[j];
    }
    cin>>q;
    int lil_y[q];
    for(int j=0;j<q;j++)
    {
        cin>>lil_y[j];
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(lil_y[j]==i || lil_x[j]==i)
            {
                count++;
                break;
            }
        }
    }
    if(count==n)
    cout<<"I become the guy.";
    else
    cout<<"Oh, my keyboard!";
    return 0;
}
