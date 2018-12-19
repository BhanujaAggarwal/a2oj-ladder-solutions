#include<bits/stdc++.h>
using namespace std;
int main()
{
    string blank,space;
    cin>>blank>>space;
    int n=blank.length(),count=0;
    for(int i=0;i<n;i++)
    {
        if(blank[i]<91)
        blank[i]=blank[i]+32;
        if(space[i]<91)
        space[i]=space[i]+32;
    }
    for(int i=0;i<n;i++)
    {
        if(blank[i]>space[i])
        {
            cout<<"1";
            break;
        }
        else if(blank[i]<space[i])
        {
            cout<<"-1";
            break;
        }
        else
        count++;
    }
    if(count==n)
    {
        cout<<"0";
    }
    return 0;
}
