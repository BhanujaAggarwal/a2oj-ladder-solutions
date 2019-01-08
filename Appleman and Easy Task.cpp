#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,the_cure=0;
    cin>>n;
    char xoxo[n][n];
    for(int i=0;i<n;i++)
    {
        cin>>xoxo[i];
    }
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(i-1>=0 and xoxo[i-1][j]=='o')
            {
                count++;
            }
            if(j-1>=0 and xoxo[i][j-1]=='o')
            {
                count++;
            }
            if(i+1<n and xoxo[i+1][j]=='o')
            {
                count++;
            }
            if(j+1<n and xoxo[i][j+1]=='o')
            {
                count++;
            }
            if(count%2==0)
            the_cure++;
        }
    }
    if(the_cure==n*n)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}
