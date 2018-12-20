#include<bits/stdc++.h>
using namespace std;
int main()
{
    string xoxo;
    cin>>xoxo;
    int n=xoxo.length(),hehe=1,count=0;
    for(int i=0;i<n;i++)
    {
     if(xoxo[i]=='W' && xoxo[i+1]=='U' && xoxo[i+2]=='B')
        {
            i+=2;
            if(hehe==0 && count==0)
            {
                cout<<" ";
            }
            count++;
        }
        else
        {
            cout<<xoxo[i];
            hehe=0;
            count=0;
        }
    }

    return 0;
}
