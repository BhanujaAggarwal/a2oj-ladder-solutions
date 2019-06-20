#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    long int drink=k*l;
    drink=drink/nl;
    long int limes=c*d,salt=p/np;
    long int xoxo;
    xoxo=min(drink,min(limes,salt));
    cout<<xoxo/n;
    return 0;
}
