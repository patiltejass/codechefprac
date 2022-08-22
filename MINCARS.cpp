#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n==0)
        cout<<"0"<<endl;
    else if(n%4==0)
        cout<<n/4<<endl;
    else
        cout<<(n/4)+1<<endl;    
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