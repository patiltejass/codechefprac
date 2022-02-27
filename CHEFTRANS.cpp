#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x+y>z)
        cout<<"TRAIN"<<endl;
    else if (x+y<z)
        cout<<"PLANEBUS"<<endl;
    else
        cout<<"EQUAL"<<endl;
    
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