#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,A,B;
    cin>>a>>b>>A>>B;
    cout<<(A/a)+(B/b)<<endl;
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