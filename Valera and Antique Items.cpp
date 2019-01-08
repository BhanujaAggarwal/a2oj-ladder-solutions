#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,money,sun=0;
    cin>>n>>money;
    int number[n],yesh[n];
    memset(yesh,0,sizeof(yesh));
    for(int i=0;i<n;i++)
    {
        cin>>number[i];
        int xoxo[number[i]];
        for(int j=0;j<number[i];j++)
        {
            cin>>xoxo[j];
        }
        for(int j=0;j<number[i];j++)
        {
            if(xoxo[j]<money)
            {
                yesh[i]=1;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        sun=sun+yesh[i];
    }
    cout<<sun<<endl;
    for(int i=0;i<n;i++)
    {
        if(yesh[i]==1)
        cout<<i+1<<" ";
    }


    return 0;
}
