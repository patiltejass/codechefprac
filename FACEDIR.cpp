#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n%4==0)
        cout<<"North"<<endl;
    else if (n%4==1)
        cout<<"East"<<endl;
    else if (n%4==2) 
        cout<<"South"<<endl;
    else
        cout<<"West"<<endl;
    
    
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