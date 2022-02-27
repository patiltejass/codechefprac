#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    if(a==0)
        cout<<"Liquid"<<endl;
    else if (b==0)
        cout<<"Solid"<<endl;
    else
        cout<<"Solution"<<endl;
    

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