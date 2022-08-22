#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int price[n];
    int hike[n];
    int final[n];
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    for(int i=0;i<n;i++){
        cin>>hike[i];
    }
    for(int i=0;i<n;i++){
        final[i]=price[i]+hike[i];
        cout << final[i] << endl;
    }
    
    
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