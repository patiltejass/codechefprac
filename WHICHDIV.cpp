#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   if(n<1600)
        cout<<"3"<<endl;
    else if (n>=1600 && n<2000)
        cout<<"2"<<endl;
    else
        cout<<"1"<<endl;
     
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