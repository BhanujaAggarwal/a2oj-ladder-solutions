#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int rema=n%m,price=0;
    if(m*a<=b)
    {
        price=a*n;
    }
    else
    {
        price=(n/m)*b;
        if(rema!=0)
        {
            if(b<=rema*a)
            price=price+b;
            else
            price=price+rema*a;
        }
    }
    cout<<price;
    return 0;
}
