#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y;
    cin>>x>>y;
    if (x==y)
        cout<<"ANY"<<endl;
    else if(x<y)
        cout<<"FIRST"<<endl;
    else
        cout<<"SECOND"<<endl;
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