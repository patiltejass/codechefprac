#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,m,n;
    cin>>x>>m>>n;
    if((m+n*2)>=x)
        cout<<"Qualify"<<endl;
    else
        cout<<"NotQualify"<<endl;
    
    
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