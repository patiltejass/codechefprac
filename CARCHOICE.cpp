#include<bits/stdc++.h>
using namespace std;

void solve()
{
    float x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    if(y1/x1 < y2/x2)
        cout<<"-1"<<endl;
    else if (y1/x1 > y2/x2)
        cout<<"1"<<endl;
    else
        cout<<"0"<<endl;
    
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