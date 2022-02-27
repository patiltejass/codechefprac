#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int a,b,x,y;
   cin>>a>>b>>x>>y;
   if(a*b<=x*y)
       cout<<"Yes"<<endl;
   else
        cout<<"No"<<endl;
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