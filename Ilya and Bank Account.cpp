#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=0)
    {
        cout<<n;
    }
    else
    {
        int xoxo,love;
        love=(n/100)*10 + n%10;
        xoxo=n/10;
        cout<<max(love,xoxo);
    }
    return 0;
}
