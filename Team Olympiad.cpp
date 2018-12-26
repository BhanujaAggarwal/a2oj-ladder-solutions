#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,one=0,two=0,three=0,lya=0,a,b=0,c=0,d=0;
    cin>>n;
    int xoxo[3][n];
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
        {
            one++;
            xoxo[0][b]=i+1;
            b++;
        }
        else if(a==2)
        {
            two++;
            xoxo[1][c]=i+1;
            c++;
        }
        else
        {
            three++;
            xoxo[2][d]=i+1;
            d++;
        }
    }
    int rise=min(one,min(two,three));

    cout<<rise<<endl;
    for(int j=0;j<rise;j++)
    {
            cout<<xoxo[0][j]<<" "<<xoxo[1][j]<<" "<<xoxo[2][j]<<" "<<endl;
    }
    return 0;
} 
