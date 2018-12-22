#include <bits/stdc++.h>
using namespace std;
int main()
{
    string xoxo;
    getline(cin,xoxo);
    long long int n=xoxo.length(),count=0;
    map<char,int> m;
    for(long long int i=1;i<n-1;i=i+3)
    {
        if(m[xoxo[i]]==0)
        {
            count++;
            m[xoxo[i]]=1;
        }
    }
    cout<<count;

  return 0;
}
