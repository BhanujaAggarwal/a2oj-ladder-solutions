#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,aa=0,bb=0,ab=0;
    cin>>a>>b;
    for(int i=1;i<=6;i++)
    {
        if(abs(a-i)<abs(b-i))
        aa++;
        else if(abs(a-i)>abs(b-i))
        bb++;
        else
        ab++;
    }
    cout<<aa<<" "<<ab<<" "<<bb;
    return 0;
}
