#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,cake=0,count=0;
    cin>>r>>c;
    char xoxo[r][c];
    int haha[r][c]={0};
    memset(haha,0,sizeof(haha));
    for(int i=0;i<r;i++)
    {
        cin>>xoxo[i];
    }
    for(int i=0;i<r;i++)
    {
        count=0;
        for(int j=0;j<c;j++)
        {
            if(xoxo[i][j]!='S')
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if(count==c)
        {
            for(int j=0;j<c;j++)
            {
                haha[i][j]++;;
            }
        }
    }
    for(int j=0;j<c;j++)
    {
        count=0;
        for(int i=0;i<r;i++)
        {
            if(xoxo[i][j]!='S')
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if(count==r)
        {
            for(int i=0;i<r;i++)
            {
                haha[i][j]++;
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(haha[i][j]==2)
            haha[i][j]=haha[i][j]/2;
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cake=cake+haha[i][j];
        }
    }
    cout<<cake;



    return 0;
}
