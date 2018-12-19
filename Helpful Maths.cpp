#include<bits/stdc++.h>
using namespace std;
int main()
{
    string xoxo;
    cin>>xoxo;
    int n=xoxo.length(),one=0,two=0,three=0;
    for(int i=0;i<n;i+=2)
    {
        if(xoxo[i]=='1')
        {
            one++;
        }
        else if(xoxo[i]=='2')
        {
            two++;
        }
        else
        {
            three++;
        }
    }

    for(int i=0;i<one;i++)
    {
        if(i<one-1)
        cout<<"1+";
        else if(i==one-1 && two==0 && three==0)
        cout<<"1";
        else
        cout<<"1+";
    }
    for(int i=0;i<two;i++)
    {
        if(i<two-1)
        cout<<"2+";
        else if(i==two-1 && three==0)
        cout<<"2";
        else
        cout<<"2+";
    }
    for(int i=0;i<three;i++)
    {
        if(i<three-1)
        cout<<"3+";
        else
        cout<<"3";
    }
    return 0;
}
