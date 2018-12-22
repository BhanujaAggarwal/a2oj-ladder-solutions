#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x3,y3,x4,x2,y2,y4;
    cin>>x1>>y1>>x2>>y2;
    if(x2-x1==y2-y1 || x2-x1==y1-y2)
    {
        x3 = x2;
        x4 = x1;
        y3 = y1;
        y4 = y2;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    }
    else if(x2==x1)
    {
        y3=y1;
        y4=y2;
        x3=x1+y2-y1;
        x4=x3;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    }
    else if(y2==y1)
    {
        x3=x1;
        x4=x2;
        y3=y1+x2-x1;
        y4=y3;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    }
    else
    cout<<"-1";
    return 0;
}
