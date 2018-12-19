#include<bits/stdc++.h>
using namespace std;
int main()
{
    int xoxo[5][5],row,coloumn;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>xoxo[i][j];
            if(xoxo[i][j]==1)
            {
                row=i;
                coloumn=j;
            }
        }
    }
    row=abs(row-2);
    coloumn=abs(coloumn-2);
    cout<<row+coloumn;
    return 0;
}
