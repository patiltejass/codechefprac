#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x,p;
    cin>>n>>x>>p;
    int i = (x*3)-((n-x)*1);
    if(p<=i)
        cout<<"PASS"<<endl;
    else
        cout<<"FAIL"<<endl;
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