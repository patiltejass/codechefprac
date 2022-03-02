#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    int a = abs(y1-x1);
    int b = abs(y2-x2);
    cout<<max(a,b)<<endl;
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