#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   if(n%2==0)
       cout<<((n/2)*3)-n/2<<endl;
    else
        cout<<((n/2)*3)-(n/2)+3<<endl;
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