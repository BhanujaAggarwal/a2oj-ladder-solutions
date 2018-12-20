#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int xoxo[t],hehe ,haha,min,max,only_you=0;
    for(int i=0;i<t;i++)
    {
        cin>>xoxo[i];
        if(i==0)
        {
            min=xoxo[0]; haha = 0 ;
            max=xoxo[0]; hehe = 0 ;
        }
        if(xoxo[i]>max)
        {
            max=xoxo[i];
            hehe=i;
        }
        else if(xoxo[i]<=min)
        {
            min=xoxo[i];
            haha=i;
        }
    }
        if(hehe>haha)
        {
            only_you=t-2+(hehe-haha);
        }
        else
        {
            only_you=t-1+(hehe-haha);
        }
        cout<<only_you;
    return 0;
}
