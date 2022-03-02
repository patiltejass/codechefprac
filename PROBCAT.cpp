#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n<100)
        cout<<"Easy"<<endl;
    else if (n>=100 && n<200)
        cout<<"Medium"<<endl;
    else
        cout<<"Hard"<<endl;
    
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




