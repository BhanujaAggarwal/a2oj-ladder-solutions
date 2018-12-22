#include<bits/stdc++.h>
using namespace std;
struct bad
{
  int initialenergy;
  int bonusenergy;
};
bool compare(bad wish, bad kiss)
    {
        if(wish.initialenergy<kiss.initialenergy)
        return 1;
        return 0;
    }
int main()
{
    long int s;
    int n,count=0;
    cin>>s>>n;
    struct bad blood[n];

    for(int i=0;i<n;i++)
    {
        cin>>blood[i].initialenergy;
        cin>>blood[i].bonusenergy;
    }
    sort(blood,blood+n,compare);
    for(int i=0;i<n;i++)
    {
        if(s>blood[i].initialenergy)
        {
            s=s+blood[i].bonusenergy;
            count++;
            if(count!=i+1)
            break;
        }
    }
    if(count==n)
    cout<<"YES";
    else
    cout<<"NO";
}
