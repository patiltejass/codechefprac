#include<bits/stdc++.h>
using namespace std;

void solve()
{
    float x1,x2,y1,y2,d;
    cin>>x1>>y1>>x2>>y2>>d;
    float a = min(x1/x2,y1/y2);
    if(a>=d)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
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