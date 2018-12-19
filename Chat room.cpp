#include<bits/stdc++.h>
using namespace std;
int main()
{
    string xoxo;
    cin>>xoxo;
    int n=xoxo.length(),count=0;
    for(int i=0;i<n;i++)
    {
        if(xoxo[i]=='h')
        {
            for(int j=i+1;j<n;j++)
            {
                if(xoxo[j]=='e')
                {
                    for(int k=j+1;k<n;k++)
                    {
                        if(xoxo[k]=='l')
                        {
                            for(int s=k+1;s<n;s++)
                            {
                                if(xoxo[s]=='l')
                                {
                                    for(int p=s+1;p<n;p++)
                                    {
                                        if(xoxo[p]=='o')
                                        {
                                            count=1;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(count==1)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
