#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y;
    cin>>x>>y;
    if(x/2 > y)
        cout<<y<<endl;
    else
        cout<<x/2<<endl;
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