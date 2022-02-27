#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n%10==0)
        cout<<n/10<<endl;
    else
        cout<<(n/10)+1<<endl;
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