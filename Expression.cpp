#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int xoxo[6];
    xoxo[0]=a+b*c;
    xoxo[1]=a*(b+c);
    xoxo[2]=a*b*c;
    xoxo[3]=(a+b)*c;
    xoxo[4]=a+b+c;
    xoxo[5]=a*b+c;
    sort(xoxo,xoxo+6);
    cout<<xoxo[5];
    return 0;
}
