#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,m,d;
    cin>>x>>m>>d;
    if(x*m>x+d)
        cout<<x+d<<endl;
    else
        cout<<x*m<<endl;
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