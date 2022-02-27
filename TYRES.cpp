#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n%4==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

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