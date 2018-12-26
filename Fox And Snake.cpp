#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<b;j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else if((i-1)%4==0)
        {
            for(int j=0;j<b-1;j++)
            {
                cout<<".";
            }
            cout<<"#"<<endl;
        }
        else
        {
            cout<<"#";
            for(int j=1;j<b;j++)
            {
                cout<<".";
            }
            cout<<endl;
        }
    }
    return 0;
} 
