#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        string xoxo;
        cin>>xoxo;
        int hehe;
        hehe=xoxo.length();
        if(hehe>10)
        {
            char firsttt,lasttt;
            firsttt=xoxo[0];
            lasttt=xoxo[hehe-1];
            hehe=hehe-2;
            cout<<firsttt<<hehe<<lasttt<<endl;
        }
        else
        cout<<xoxo<<endl;
    }

    return 0;
}
