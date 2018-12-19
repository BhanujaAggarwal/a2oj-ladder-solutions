#include<bits/stdc++.h>
using namespace std;
int main()
{
    string xoxo;
    cin>>xoxo;
    int n,hehe;
    n=xoxo.length();
    for(int i=0;i<n;i++)
    {
        hehe=int(xoxo[i]);
        if(hehe<91)
        {
            xoxo[i]=xoxo[i]+32;
        }
    }
    for(int i=0;i<n;i++)
    {
        hehe=int(xoxo[i]);
        if(hehe!=97 && hehe!=101 && hehe!=105 && hehe!=111 && hehe!=117 && hehe!=121)
        {
            cout<<"."<<xoxo[i];
        }
    }
    return 0;
}
