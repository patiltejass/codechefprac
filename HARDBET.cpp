#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b && a<c)
        cout<<"Draw"<<endl;
    else if (b<c)
        cout<<"Bob"<<endl;
    else
        cout<<"Alice"<<endl;
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