#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y,m;
    cin>>x>>y>>m;
    if(x*m < y)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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