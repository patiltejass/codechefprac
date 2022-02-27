#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int X,x,Y,y,Z,z;
    cin>>X>>x>>Y>>y>>Z>>z;
    if(x>=X && y>=Y && Z>=z)
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