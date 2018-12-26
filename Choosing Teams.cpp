#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,xoxo=0;
    cin>>a>>b;
    int hoho[a];
    for(int i=0;i<a;i++)
    {
        cin>>hoho[i];
        if(hoho[i]<=5-b)
        xoxo++;
    }
    cout<<xoxo/3;

    return 0;
}
