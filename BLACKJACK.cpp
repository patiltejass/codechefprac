#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y;
    cin>>x>>y;
    if(x+y>10)
        cout<<21-(x+y)<<endl;
    else
        cout<<"-1"<<endl;
}

int main()
{
    int T;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        solve();
    }

    return 0;    
}